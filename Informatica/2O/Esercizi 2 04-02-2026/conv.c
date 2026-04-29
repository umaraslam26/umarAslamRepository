#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int main(){
    int e;
    printf("Euro: ");
    scanf("%d", &e);

    float tu, tg, tj;

    printf("Tasso USA: ");
    scanf("%f", &tu);
    printf("Tasso GBP: ");
    scanf("%f", &tg);
    printf("Tasso JPY: ");
    scanf("%f", &tj);

    float dol = e*tu;
    float ste = e*tg;
    float yen = e*tj;

    printf("Dollari: %.2f\nSterline: %.2f\nYen: %.2f", dol, ste, yen);
    getch();
    return 0;
}