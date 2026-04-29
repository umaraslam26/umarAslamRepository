#include<stdio.h>
#include<stdlib.h>

main(){
	int prezzo;
	int prezzo2;
	int scarto;
	int s1;
	int s2;
	int s3;
	int s4;
	printf("Inserisci il prezzo: ");
	scanf("%d", &prezzo);
	
	if (prezzo>300){
		scarto = prezzo - 300;
		s3 = (scarto *20)/100;
		s2 = 30;
		s4 = s2 + s3;
		prezzo2 = prezzo - s4;
		printf("%d, %d", prezzo2, s4);
	}
	
	else{
		s3 = prezzo/10;
		prezzo2 = prezzo - s3;
		printf("%d,%d", prezzo2, s3);	
	}
}