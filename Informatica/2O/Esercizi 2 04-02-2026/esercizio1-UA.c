#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int somma = a+b+c;
    int differenza = a-b-c;
    int prodotto = a*b*c;

    printf("Somma: %d\nDifferenza: %d\nProdotto: %d", somma, differenza, prodotto);
    getch();
    return 0;
}