#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d%d%d", &a, &b, &c);

    d=b;
    e=a;
    a=c;
    b=e;
    c=d;

    printf("%d\n%d\n%d", a, b, c);

    getch();
    return 0;
}