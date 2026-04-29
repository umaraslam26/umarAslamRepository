#include<stdio.h>
#include<stdlib.h>

main(){ 
	int y;
	float pi = 3.14;
	printf("y: ");
	scanf("%d", &y);
	float z = 2*y*pi;
	printf("Circonferenza: %.2f",z);
    float area = y*y*pi;
	printf("\nArea: %.2f",area);
}
