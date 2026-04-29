#include<stdio.h>
#include<stdlib.h>
main(){
	int x, y;
	printf("X: ");
	scanf("%d", &x);
	
	printf("\nY: ");
	scanf("%d", &y);
	
	if (x < y) {
		printf("x e' minore di y. \n");
	}
	else if (x > y){
		printf("x e' maggiore di y. \n");
	}
}