#include<stdio.h>

main(){
	int numero;
	printf("Numero: ");
	scanf("%d", &numero);
	
	if (numero%2 == 0){
		printf("Divisibile per 2.\n");
	}
	else {
		printf("No divisibile per 2.\n");
	}
	
	if (numero%3 == 0){
		printf("Divisibile per 3.\n");
	}
	else {
		printf("No divisibile per 3.\n");
	}
	
	if (numero%5 == 0){
		printf("Divisibile per 5.\n");
	}
	else {
		printf("No divisibile per 5.\n");
	}
	
	if (numero%7 == 0){
		printf("Divisibile per 7.\n");
	}
	else {
		printf("No divisibile per 7.\n");
	}
	
	if (numero%11 == 0){
		printf("Divisibile per 11.\n");
	}
	else {
		printf("No divisibile per 11.\n");
	}
}