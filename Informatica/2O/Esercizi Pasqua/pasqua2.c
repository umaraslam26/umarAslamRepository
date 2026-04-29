#include<stdio.h>
#include<conio.h>

int main(){

	int ril;
	int cont = 0;
	int somma = 0;
	do {

		printf("Rilevazione: ");
		scanf("%d", &ril);
		if (ril==-1){
			break;
		} else if(ril<0){
			printf("Rilevazioni non valide");
		} else {
		    somma = somma + ril;
		    cont++;			
		}

	} while (1);

	float media = somma/cont;

	printf("\nRilevazioni: %d", cont);
	printf("\nTotale particelle: %d", somma);
	printf("\nMedia rilevazione: %.2f", media);
	if (media >= 100){
		printf("\nATTENZIONE: livello di radiazione pericoloso!");
	}

	getch();
	return 0;
}