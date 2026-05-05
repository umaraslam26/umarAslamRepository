#include<stdio.h>
#include<stdlib.h>
typedef struct{
    float *data;
    size_t size;
    size_t cap;
} Vector;

void init(Vector *v){
    v->size=0;
    v->cap=10;
    v->data=malloc(v->cap*sizeof(float));
}

void push_back(Vector *v, float value){
    if (v->size==v->cap){
        v->cap*=2;
        float *temp =realloc(v->data, sizeof(int)*v->cap);
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
    float voto;
    Vector voti;
    init(&voti);
    float somma=0;
    float media;
    int i=0;

    while(1){
        do {
            printf("Inserisci un voto(compreso tra 1 e 10): ");
            scanf("%f", &voto);
        }while(voto>10 || voto <0);

        if (i==15){
            break;
        }

        if (voto!=0){
            push_back(&voti, voto);
        }else{
            break;
        }
    }    

    for (int i=0;i<voti.size;i++){
        somma+=voti.data[i];
    }

    media = somma/voti.size;
    printf("\nMedia: %.2f\n", media);
    if (media>=6){
        printf("Promosso");
    } else {
        printf("Bocciato");
    }

    vector_free(&voti);
    return 0;
}