#include<stdio.h>

int main(){
    int n;
    int p=1;

    do {
        printf("Inserisci un numero maggiore di zero: ");
        scanf("%d", &n);
    }while (n<0);

    while (n!=1){
        p=p*n;
        n--;
    }
    
    printf("%d", p);
    return 0;
}