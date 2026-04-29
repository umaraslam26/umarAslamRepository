#include<stdio.h>

int main(){
	int arr[10];
	int n;
	int c=0;
		
	for (int i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	

	printf("Numero da trovare: ");
	scanf("%d", &n);
	
	for (int i=0;i<10;i++){
		if (n==arr[i]){
			c++;
			printf("Trovato alla posizione %d", i+1);
		}
	}
	
	if (c==0){
		printf("Il numero non e presente nel vettore. ");
	}
	
	return 0;
}