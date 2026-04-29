#include<stdio.h>
#include <conio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a>b){
		printf("il primo e maggiore");
	}else if (a==b){
		printf("Sono uguali");
	}else {
		printf("il secodo e maggiore");
	}
	getch();
	return 0;
}