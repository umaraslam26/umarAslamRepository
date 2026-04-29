#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){

    int arr[5] = {5, 2, 9, 1, 7};
    // bubble sort
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    printf("%d", arr[4]);
    return 0;
}