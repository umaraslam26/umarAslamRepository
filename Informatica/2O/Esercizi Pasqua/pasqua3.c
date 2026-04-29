#include<stdio.h>
#include<conio.h>

int main(){
	float saldo = 500.00;
	int preleva;
	int deposita;
	int n;
	

	do {
		printf("===BANCOMAT===\n1. Visualizza il saldo\n2. Preleva\n3. Deposita\n4. Esci");
		printf("\nScelta: ");
		scanf("%d", &n);
		switch (n){
		case 1: printf("Saldo: %.2f", saldo); break;
		case 2: 
			printf("Quanto vuoi prelevare: ");
			scanf("%d", &preleva);
			if (preleva > saldo){
				printf("Non puoi, non hai abbastanza!\n");
			} else {
				printf("Soldi prelevati: %d\n", preleva);
				printf("Soldi rimanenti: %.2f\n", saldo - preleva);
			}
			break;
		case 3: 
			printf("Quanto vuoi depositare.");
			scanf("%d", &deposita);
			printf("Soldi depositati: %d\n", deposita);
			printf("Soldi rimanenti: %.2f\n", saldo + deposita);
			break;
		case 4: printf("Arrivederci."); break;
		}
	} while (n!=4);
	
	getch();
	return 0;
}