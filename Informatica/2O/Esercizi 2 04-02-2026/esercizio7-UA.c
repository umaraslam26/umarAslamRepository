#include<stdio.h>
#include<conio.h>

 
int main(){

    int r;
    printf("Raggio: ");
    scanf("%d", &r);
    float area = r*r*3.14;
    float circ = r*2*3.14; 


    printf("Area: %.2f\nCirconferenza: %.2f", area, circ);

    getch();
    return 0;
}