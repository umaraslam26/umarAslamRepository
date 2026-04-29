#include<stdio.h>

main(){
	int temp;
	int umidita;
	
	printf("Umidita: ");
	scanf("%d", &umidita);
	
	printf("Temperatura: ");
	scanf("%d", &temp);
	
	if (temp < 5){
	    printf("Gelo");
	}
	if (temp > 5 and temp < 10) {
	    ("Freddo");
	}
	if (temp > 10 and temp < 20){
	    printf("Fresco");
	}
	if (temp > 20 and temp < 30){
	    printf("Caldo");
	}
	if (temp > 30 and umidita < 30){
	    printf("Torrido");
	}
	if (temp > 30 and umidita > 30){
		printf("Afoso");
	}
}