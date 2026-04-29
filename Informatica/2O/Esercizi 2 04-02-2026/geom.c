#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){

    int r, b, h, bt, ht;

    printf("Raggio: ");
    scanf("%d", &r);

    float circ = r*2*3.14;
    float areaCerchio = r*r*3.14;

    printf("Base e altezza di un rettangolo: ");
    scanf("%d%d", &b, &h);   

    float periRett = (b+h)*2;
    float areaRett = b*h;

    printf("Base e altezza di un triangolo rettangolo: ");
    scanf("%d%d", &bt, &ht); 

    float areaTri = bt*ht;
    int c = sqrt(bt*bt+ ht*ht);
    float periTri = bt + ht + c;

    printf("Cerchio: Circonferenza = %.2f, Area = %.2f\n", circ, areaCerchio);
    printf("Rettangolo: Perimetro = %.2f, Area = %.2f\n", periRett, areaRett);
    printf("Cerchio: Perimetro = %.2f, Area = %.2f\n", periTri, areaTri);

    getch();
    return 0;
}