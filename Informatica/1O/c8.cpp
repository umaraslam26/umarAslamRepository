#include<stdio.h>

main(){
	int temp;
	printf("Temperatura: ");
	scanf("%d", &temp);
	if (temp < 5){printf("Gelo");}
	if (temp > 5 and temp < 10) {printf("Freddo");}
	if (temp > 10 and temp < 20){printf("Fresco");}
	if (temp > 20 and temp < 30){printf("Caldo");}
	if (temp > 30){printf("Torrido");}
}