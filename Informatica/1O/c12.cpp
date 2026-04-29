#include<stdio.h>
main(){
	int day;
	printf("Inserisci un numero da 1 a 7: ");
	scanf("%d", &day);
	
	switch (day) {
		case 1:
			printf("Lunedi'");
			break;
		case 2:
			printf("Martedi'");
			break;
		case 3:
			printf("Mercoledi'");
			break;
		case 4:
			printf("Giovedi'");
			break;
		case 5:
			printf("Venerdi'");
			break;
		case 6:
			printf("Sabato");
			break;
		case 7:
			printf("Domenica");
			break;
	}
}