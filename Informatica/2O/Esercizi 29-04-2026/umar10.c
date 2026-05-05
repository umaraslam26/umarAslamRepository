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
    v->data=malloc(sizeof(float)*v->cap);
}

void push_back(Vector *v, float value){
    if (v->size==v->cap){
        v->cap*=2;
        float *temp=realloc(v->data, sizeof(float)*v->cap); 
        if (temp==NULL){
            printf("Errore: memoria non disponibile.");
            free(temp);
            exit(1);
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
    float p;
    int q;
    int i=1;
    float somma=0;

    Vector prezzi;
    Vector quantita;
    Vector subtotali;

    init(&prezzi);
    init(&quantita);
    init(&subtotali);

    while (1){
        do {
            printf("Prezzo %d (0 per terminare): ", i);
            scanf("%f", &p);
            printf("Quantita %d (0 per terminare): ", i);
            scanf("%d", &q);
        } while (p<0 || q<0);

        if (p!=0 && q!=0){
            push_back(&prezzi, p);
            push_back(&quantita, q);
        } else if (p==0 || q==0){
            break;
        }
        i++;
    }

    for (int i=0;i<prezzi.size;i++){
        push_back(&subtotali, prezzi.data[i]*quantita.data[i]);
        printf("\nSubtotale %d: %.2f x %.0f = %.2f", i+1, prezzi.data[i], quantita.data[i], subtotali.data[i]);
    }

    for (int i=0;i<subtotali.size;i++){
        somma+=subtotali.data[i];
    }

    printf("\nPrezzo totale: %.2f", somma);

    vector_free(&prezzi);
    vector_free(&quantita);
    vector_free(&subtotali);

    return 0;
}