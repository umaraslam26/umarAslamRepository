#include<stdio.h>

int main(){
	int arr[7];
	float somma=0.0;
	int m=0;
	for (int i=0;i<7;i++){
		scanf("%d", &arr[i]);
	}
		

	for (int i=0;i<7;i++){
		somma+=arr[i];
	}
	
	float media = somma/7;
	
	for (int i=0;i<7;i++){
		if (arr[i]>media){
			m++;
		}
	}
	
	printf("Somma: %.0f", somma);
	printf("Media: %.2f\n", media);
	printf("Numeri maggiopri della media: %d", m);
	return 0;
}