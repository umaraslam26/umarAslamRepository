#include<stdio.h>

int main(){

    int n;
    do {
        printf("Numero (Compreso tra 1 e 100): ");
        scanf("%d", &n);
    } while (n>100 || n<0);

    int m = n/2;

    for (int i=0;i<=m;i++){
        printf("%d\n", 2*i +1);
    }

    return 0;
}