#include<stdio.h>

int main(){
	const int N=5;
	int arr[N];
	
	for (int i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	
	for (int i=0;i<N;i++){
		printf("Numeri: ");
		printf("%d", arr[i]);
	}
	return 0;
}