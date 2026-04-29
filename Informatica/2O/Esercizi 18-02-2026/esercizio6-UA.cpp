#include<stdio.h>
#include <conio.h>
int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (a<b){
		printf("a e minore di b.");
	} else if (a==b){
		printf("a e uguale a b.");
	}else {
		printf("a e maggiore di b.");
	}
	getch();
	return 0;
}