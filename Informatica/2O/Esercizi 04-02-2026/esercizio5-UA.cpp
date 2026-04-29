//librerie
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int a, b;
	
	printf("A: ");
	scanf("%d", &a);
	
	printf("B: ");
	scanf("%d", &b);
	
	int prodotto = 1;
	for(; b>0;	b--){
		prodotto = prodotto*a;
	}
	printf("%d", prodotto);
	getch();
	return 0;
}
