//librerie
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#define PI 3.14

int main() {
	int a;
	
	printf("Raggio: ");
	scanf("%d", &a);
	int c = a*a*PI;
	printf("%d", c);
	
	getch();
	return 0;
}