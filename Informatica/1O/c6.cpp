#include<stdio.h>

int fattoriale(int numero){
	if (numero!=0){
		int x = numero - 1;
	    int prodotto;
	
	    while (true){
		    if (x != 0){
			    numero = numero * x;
		        x = x - 1;
		    }
		    else {
			    break;
		    }
	    }
	}
	else {
		return 0;
	}
}


main(){
	int numero;
	printf("Numero: ");
	scanf("%d", &numero);
	printf("%d", fattoriale(numero));
}
