#include <stdio.h>

int main(){
    int max = 0;
    int posmax;

    int min = 0;
    int posmin;

    int arr[8];
    for (int i=0;i<8;i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0;i<8;i++){
        if(arr[i]>max){
            posmax = i;
            max=arr[i];
        }
    }

    min=arr[posmax];
    for (int i=0;i<8;i++){
        if (arr[i]<min){
            min=arr[i];
            posmin = i;
        }
    }
    int magg=0;
    for (int i=0;i<8;i++){
        if(arr[i]>5){
            magg++;
        }
    }

    int pari=0;
    for (int i=0;i<8;i++){
        if(arr[i]%2==0){
            pari++;
        }
    }

    printf("Massimo: %d, Posizione: %d\n", max, posmax);
    printf("Minimo: %d, Posizione: %d\n", min, posmin);
    printf("Numeri pari: %d\n", pari);
    printf("Numeri > 5: %d", magg);

    return 0;
}