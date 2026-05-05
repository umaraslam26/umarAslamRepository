#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int *data;
    size_t size;
    size_t cap;
} Vector;

void init(Vector *v){
    v->size=0;
    v->cap=10;
    v->data=malloc(sizeof(int)*v->cap);
}

void push_back(Vector *v, int value){
    if (v->size==v->cap){
        v->cap*=2;
        int *temp=realloc(v->data, sizeof(int)*v->cap);
        if(temp==NULL){
            printf("Errore: non abbastanza memoria");
        }
    }
    v->data[v->size++]=value;
}

void vector_free(Vector *v){
    free(v->data);
    v->size=0;
    v->cap=0;
}

int main(){
    Vector punti;
    init(&punti);
    int punto;
    int i=1;
    float somma=0;
    float media;
    int max;
    int posmax;
    int min;
    int posmin;
    int x=0;

    while (1){
        do {
            printf("Punteggio giocatore %d (0 per concludere): ", i);
            scanf("%d", &punto);
        }while (punto<0);

        if(punto!=0){
            push_back(&punti, punto);
        }else{
            break;
        }
        i++;
    }

    for (int i=0;i<punti.size;i++){
        somma+=punti.data[i];
    }

    media=somma/punti.size;

    max=punti.data[0];

    for (int i=1;i<punti.size;i++){
        if (punti.data[i]>max){
            max=punti.data[i];
            posmax=i;
        }
    }

    min=punti.data[punti.size-1];

    for(int i=0;i<punti.size;i++){
        if(punti.data[i]<min){
            min=punti.data[i];
            posmin=i;
        }
    }
    for(int i=0;i<punti.size;i++){
        if(punti.data[i]>media){
            x++;
        }
    }

    printf("Punteggio totale della partita: %.2f", somma);
    printf("\nMedia punti per giocatore: %.2f", media);
    printf("\nGiocatore %d con piu punti: %d", posmax+1, max);
    printf("\nGiocatore %d con meno punti: %d", posmin+1, min);
    printf("\nGiocatori sopra la media: %d", x);

    float av;
    printf("\nPunteggio squadra avversaria: ");
    scanf("%f", &av);

    if(av<somma){
        printf("Vittoria! (%.2f - %.2f)", somma, av);
    }else if(av>somma){
        printf("Sconfitta! (%.2f - %.2f)", somma, av);
    } else{
        printf("Pareggio! (%.2f - %.2f)", somma, av);
    }

    vector_free(&punti);
    return 0;
}