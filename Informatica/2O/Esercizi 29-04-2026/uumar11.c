#include<stdio.h>

int main(){

    int g[5];
    float somma=0;
    float media;

    int max;
    int posmax;

    int min;
    int posmin;

    for(int i=0;i<5;i++){
        printf("Punteggio %d: ", i+1);
        scanf("%d", &g[i]);
    }

    for(int i=0;i<5;i++){
        somma+=g[i];
    }

    media=somma/5;

    max=g[0];

    for (int i=1;i<5;i++){
        if (g[i]>max){
            max=g[i];
            posmax=i;
        }
    }

    min=g[4];

    for (int i=1;i<5;i++){
        if (g[i]<min){
            min=g[i];
            posmin=i;
        }
    }

    int x=0;
    for (int i=1;i<5;i++){
        if(g[i]>media){
            x++;
        }
    }

    printf("Punteggio totale: %.2f", somma);
    printf("\nMedia: %.2f", media);
    printf("\nGiocatore %d, con piu punti: %d", posmax+1, max);
    printf("\nGiocatore %d, con meno punti: %d", posmin+1, min);
    printf("\nGiocatori sopra la media: %d", x);

    float av;
    printf("\nPunteggio squadra avversaria: ");
    scanf("%f", &av);

    if(av<somma){
        printf("Vittoria! (%.2f - %.2f)", somma, av);
    }else if(av>somma){
        printf("Sconfitta! (%.2f - %.2f)", somma, av);
    } else{
        printf("Pareggio! (%.2f - %.2f)", somma, av);
    }

    return 0;
}