#include<stdio.h>
#include <conio.h>
int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (a!=b){
		printf("Sono diversi.");
	}else {
		printf("Sono uguali.");
	}
	getch();
	return 0;
}