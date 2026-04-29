#include<stdio.h>
#include <conio.h>
int main(){
	int a;
	scanf("%d", &a);
	
	if (a==0){
		printf("Uguale a zero.");
	}else{
		printf("Non uguale a zero.");
	}
	
	getch();
	return 0;
}