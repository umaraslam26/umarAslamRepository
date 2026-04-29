 #include<stdio.h>
main(){
	int voto;
	printf("Inserisci il voto: ");
	scanf("%d", &voto);
    switch (voto){
    	case 10:
    		printf("Eccellente");
    	case 9:
    		printf("Distinto");
    	case 8:
    		printf("Buono");
    	case 7:
    		printf("Discreto");
    	case 6:
    		printf("Sufficiente");
    	case 5:
    		printf("Insufficiente");
    	case 4:
    		printf("Insufficiente");
    	case 3:
    		printf("Insufficiente");
    	case 2:
    		printf("Insufficiente");
	}
}