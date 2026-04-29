#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, c, d, e, f, g;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    g=a;
    f=b;

    a=c;
    b=d;
    c=f;
    d=g;


    printf("%d\n%d\n%d\n%d", a, b, c, d);

    getch();
    return 0;
}