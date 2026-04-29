#include<stdio.h>

int main(){
	const int N=6;
	int arr[N];
	
	for (int i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	
	for (int i=0;i<N;i++){
		printf("Numeri: ");
		printf("%d", arr[N-i-1]);
	}
	return 0;
}