#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){

    int b, h;
    scanf("%d%d", &b, &h);
    float area = (b*h)/2;
    int radice = sqrt(b*b + h*h);
    float peri = b+h+radice;


    printf("Area: %.2f\nCirconferenza: %.2f", area, peri);

    getch();
    return 0;
}