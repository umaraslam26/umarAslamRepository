#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *data;
    size_t capacity;
    size_t size;
} V;

void init(V *v){
    v->capacity=10;
    v->size=0;
    v->data = malloc(v->capacity*sizeof(int));

}

void push_back(V *v, int value){
    if (v->size==v->capacity){
        v->capacity=v->capacity*2;
        int *temp = realloc(v->data, sizeof(int)*v->capacity);
        if (temp==NULL){
            printf("Errore: memoria non sufficiente");
        } else {
            v->data=temp;
        }
    }
    v->data[v->size++] = value;
}

void vfree(V *v){
    free(v->data);
    v->size = 0;
    v->capacity = 0;
}

int main(){

    V arr;
    V pari;
    V dispari;
    init(&arr);
    init(&pari);
    init(&dispari);

    int i=0;

    while (1){
        printf("Numero: ");
        scanf("%d", &arr.data[i]);
        if (arr.data[i]==0){
            break;
        }
        push_back(&arr, arr.data[i]);
        if (arr.data[i]%2==0){
            push_back(&pari, arr.data[i]);
        } else{
            push_back(&dispari, arr.data[i]);
        }
    }

    for (int i=0;i<pari.size;i++){
        printf("Numero pari %d: %d\n", i+1, pari.data[i]);
    }

    for (int i=0;i<pari.size;i++){
        printf("Numero dispari %d: %d\n", i+1, dispari.data[i]);
    }

    vfree(&arr);
    vfree(&pari);
    vfree(&dispari);
    return 0;
}