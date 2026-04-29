#include<stdio.h>

main(){
	int voto;
	printf("Inserire Voto: ");
	scanf("%d", &voto);
	while(true){
		if(voto<11 and voto >1){
			if(voto==10){
		        printf("Eccellente");
	        }
	        else if (voto == 9){
		        printf("Distinto");
	        }
	        else if (voto== 8){
		        printf("Buono");
	        }
	        else if (voto==7){
		        printf("Discreto");
	        }
	        else if (voto== 6){
		        printf("Sufficirnte");
	        }
	        else if (voto < 4){
		        printf("Insufficiente");
	        }
	        break;
	    }
	    else {
	    	printf("Il voto deve essere tra 10 e 2");

		}
	}	
}