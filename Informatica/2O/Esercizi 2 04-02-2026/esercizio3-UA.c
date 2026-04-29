#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int s = a+b;
    int p = c*d;
    int s2 = a+b+c+d; // qua mi esce 14 con 2 3 4 5 come input, se non sbaglio voleva dire la somma del prodotto degli ultimi 2 e la somma dei primi due

    printf("Somma primi due: %d\nProdotto ultimi due: %d\nSomma totale: %d\n", s, p, s2);

    getch();
    return 0;
}