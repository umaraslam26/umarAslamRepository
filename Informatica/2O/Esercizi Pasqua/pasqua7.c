#include <stdio.h>
#include<conio.h>

int main() {
    int scelta;
    int tipo;
    int quanti;
    float totale = 0;

    do {
        printf("\n=== BIGLIETTERIA CINEMA ===\n");
        printf("1. Acquista biglietti\n");
        printf("2. Visualizza totale\n");
        printf("3. Esci\n");
        printf("Scelta : ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                printf("Tipo di biglietto:\n");
                printf("1. Intero (9.00 euro)\n");
                printf("2. Ridotto (6.00 euro)\n");
                printf("3. Weekend (11.00 euro)\n");
                printf("Scelta : ");
                scanf("%d", &tipo);

                printf("Quanti biglietti ? ");
                scanf("%d", &quanti);

                float prezzo = 0;

                switch(tipo) {
                    case 1:
                        prezzo = 9.00;
                        break;
                    case 2:
                        prezzo = 6.00;
                        break;
                    case 3:
                        prezzo = 11.00;
                        break;
                    default:
                        printf("Scelta non valida!\n");
                        continue;
                }

                float subtotale = 0;

                for(int i = 0; i < quanti; i++) {
                    subtotale += prezzo;
                }

                totale += subtotale;

                printf("Aggiunto: %d biglietti, %.2f euro\n", quanti, subtotale);
                break;
            case 2:
                printf("Totale : %.2f euro\n", totale);

                if(totale > 30.00) {
                    float sconto = totale * 0.10;
                    printf("Sconto 10%%: -%.2f euro\n", sconto);
                    printf("Totale: %.2f euro\n", totale - sconto);
                }
                break;
            case 3:
                printf("Grazie e buona visione!\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while(scelta != 3);

    getch();
    return 0;
}