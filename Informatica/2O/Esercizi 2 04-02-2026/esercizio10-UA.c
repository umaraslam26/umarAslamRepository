#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){

    int t;
    printf("Temaperatura Fahrenheit: ");
    scanf("%d", &t);

    float t2 = (t-32)*0.55555555555555;

    printf("Temperatura Celsius: %.2f\n", t2);

    getch();
    return 0;
}