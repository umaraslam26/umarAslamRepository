#include <stdio.h>
#include<stdlib.h>

typedef struct {
    float *data;
    size_t size;
    size_t cap;
} Vector;

void init(Vector *v){
    v->data = malloc(sizeof(float) * 4);
    v->size=0;
    v->cap=4;
}

int pushBack(Vector *v, float val){
    if (v->size==v->cap){
        v->cap*=2;
        float *temp = realloc(v->data, sizeof(float) * v->cap);
        if (temp == NULL) {
            fprintf(stderr, "realloc failed\n");
            return 1;
        }
        v->data=temp;
    }
    v->data[v->size++]=val;
    return 0;
}

void freeVector(Vector *v){
    free(v->data);
    v->size=0;
    v->cap=0;
}

void swap(float *a, float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    Vector arr1, arr2;
    init(&arr1);
    init(&arr2);
    int i=0;
    while (1){
        float val;
        printf("Numero (puoi inserire al massimo 20 valori): ");
        scanf("%f", &val);
        if (val==0) {
            break;
        } else {
            pushBack(&arr1, val);
            i++;
        }
        if(i==20){
            printf("Puoi inserire al massimo 20 valori.\n");
            break;
        }
    }

    for (int i=0;i<(int)arr1.size;i++){
        for (int j=0;j<(int)arr1.size-1;j++){
            if (arr1.data[j]>arr1.data[j+1]){
                swap(&arr1.data[j], &arr1.data[j+1]);
            }
        }
    }

    for (int j=0;j<arr1.size;j++){
        if (arr1.data[j]!=arr1.data[j+1]){
            pushBack(&arr2, arr1.data[j]);
        }
    }

    for (int i = 0; i < (int)arr2.size; i++) {
        printf("%.0f\n", arr2.data[i]);
    }

    freeVector(&arr1);
    freeVector(&arr2);
    return 0;
}