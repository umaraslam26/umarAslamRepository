#include<stdio.h>
#include <conio.h>
int main(){
	int a;
	scanf("%d", &a);
	if (a%100==0){
		printf("Si e un secolo.");
	} else {
		printf("Non e un secolo.");
	}
	getch();
	return 0;
}