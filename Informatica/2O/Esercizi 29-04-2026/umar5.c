#include<stdio.h>


int main(){
    int arr[100];
    int n;
    do {
        printf("Inserisci un numero compreso tra 2 e 20: ");
        scanf("%d", &n);
    }while(n>20 || n<2);

    printf("Ecco i primi %d numeri della sequenza di Fibonacci: ", n);
    arr[0]=1;
    arr[1]=1;
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    for (int i=0;i<n-2;i++){
        arr[i+2] = arr[i] + arr[i+1];
        printf("%d\n", arr[i+2]);
    }
}