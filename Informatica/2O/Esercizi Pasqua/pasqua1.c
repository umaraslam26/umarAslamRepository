#include<stdio.h>
#include<conio.h>

int main(){
	float somma = 0;
	float p;
	do{
		printf("Prezzo: ");
		scanf("%f", &p);
		if (p>0){
		    somma = somma + p;			
		} else if (p<0){
			printf("Prezzo non valido");
			continue;
		}

	} while (p!=0.0f);

	printf("Prezzo totale: %.2f", somma);
	getch();
	return 0;
}