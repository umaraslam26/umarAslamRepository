#include<stdio.h>

int main(){
	int arr[8];
	int max=0;
	int posmax;
	int min=0;
	int posmin;
	int diff;
	
	for (int i=0;i<8;i++){
		scanf("%d", &arr[i]);
	}
	
	for (int i=0;i<8;i++){
		if(arr[i]>max){
			max=arr[i];
			posmax=i;
		}
	}
	
	min=max;
	for (int i=0;i<8;i++){
		if(arr[i]<min){
			min=arr[i];
			posmin=i;
		}
	}
	
	if (posmax>posmin){
		diff=posmax-posmin;
	}else {
		diff=posmin-posmax;
	}
	printf("Massimo: %d, Posizione: %d\n", max, posmax+1);
	printf("Minimo: %d, Posizione: %d\n", min, posmin+1);
	printf("Numeri tra il massimo e minimo: %d", diff);
	
	return 0;
}