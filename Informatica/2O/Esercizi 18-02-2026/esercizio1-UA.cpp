#include<stdio.h>
#include <conio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a==b){
		printf("Sono uguali.");
	}else {
		printf("Non sono uguali.");
	}
	getch();
	return 0;
}