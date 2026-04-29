#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int arr[3]= {};
	
    cin >> arr[0] >> arr[1] >> arr[2];
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			if (arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
		    }
	    }
		}
	
	cout << arr[2];
	getch();
	return 0;
}