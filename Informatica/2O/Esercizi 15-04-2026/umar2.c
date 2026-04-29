#include <stdio.h>

int main(){
    int arr[6];
    int arr1[6];
    int arr2[6];

    for(int i=0;i<6;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<6;i++){
        arr1[i] = arr[i];
    }

    for(int i=0;i<6;i++){
        arr2[i] = 2*arr1[i];
    }

    for(int i=0;i<6;i++){
        printf("%d\n", arr2[i]);
    }
    return 0;
}