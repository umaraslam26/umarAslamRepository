#include<stdio.h>
#include<conio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    int q = a/b;
    int r = a%b;

    printf("Quoziente: %d\nResto: %d", q, r);

    getch();
    return 0;
}