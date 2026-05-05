#include<stdio.h>

int main(){
    int arr[5];
    int arr1[5];

    for (int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0;i<5;i++){
        arr1[i] = arr[i+1];
    }

    arr1[4] = arr[0];

    for (int i=0;i<5;i++){
        printf("%d\n", arr1[i]);
    }
    return 0;
}