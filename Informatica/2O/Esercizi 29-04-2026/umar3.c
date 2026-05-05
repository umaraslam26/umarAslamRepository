#include<stdio.h>

int main(){
    int pos=0;
    int neg=0;
    int n;
    do {
        printf("Numero (0 per terminare): ");
        scanf("%d", &n);
        if(n>0){
            pos++;
        }else {
            neg++;
        }
    } while (n!=0);
    printf("Numeri positivi: %d\n", pos);
    printf("Numeri negativi: %d", neg);
    return 0;
}