#include<stdio.h>
#include<conio.h>

 
int main(){

    int b, h;
    scanf("%d%d", &b, &h);
    float area = b*h;
    float peri = (b+h)*2;

    printf("Area: %.2f\nCirconferenza: %.2f", area, peri);

    getch();
    return 0;
}