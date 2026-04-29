#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(float *a, float *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n, max, min;
	float somma = 0.0;
	float media;
	int suff = 0;
	int insuff = 0;

    do {
 	    printf("Inserisci il numero dei studenti: ");
	    scanf("%d", &n);   	
    } while (n<0);
    
	float voti[n];

	for(int i=0;i<n;i++){
		do {
			printf("Voto studente %d: ", i+1);
		    scanf("%f", &voti[i]);
		} while(voti[i]>10 || voti[i]<0);		
	}

	for(int i=0;i<n;i++){
		somma += voti[i];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if (voti[j]>voti[j+1]){
				swap(&voti[j], &voti[j+1]);
			}
		}
	}

	for(int i=0;i<n;i++){
		if (voti[i]>=6){
			suff++;
		} else {
			insuff++;
		}
	}

    media = somma/n;

    printf("Media: %.2f", media);
    printf("\nVoto massimo: %.2f", voti[n-1]);
    printf("\nVoto minimimo: %.2f", voti[0]);
    printf("\nSufficienti: %d", suff);
    printf("\nInsufficienti: %d", insuff);

    getch();
	return 0;
}