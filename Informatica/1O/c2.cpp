#include<stdio.h>
#include<stdlib.h>

 main(){
 	
 	int a, b, c;
 	
	printf("A: ");
	scanf("%d" ,&a);
	printf("B: ");
	scanf("%d" ,&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("%d", a);
	printf("\n %d", b);
 }