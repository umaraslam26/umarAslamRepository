#include<stdio.h>
#include<conio.h>

int main() {
    int N;
    float litri, km;
    float consumo, sommaConsumi = 0;

    printf("Inserisci il numero di rifornimenti : ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Rifornimento %d:\n", i);

        printf("Litri immessi : ");
        scanf("%f", &litri);

        printf("Km percorsi : ");
        scanf("%f", &km);

        consumo = km / litri;
        sommaConsumi += consumo;

        printf("Consumo : %.2f km / L\n", consumo);
    }

    printf("Consumo medio : %.2f km / L\n", sommaConsumi / N);

    getch();
    return 0;
}