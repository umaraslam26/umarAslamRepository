#include<stdio.h>

int main(){
    int arr[5] = {4, 7, 1, 9, 3};
    float sum=0.0;

    for (int i=0;i<5;i++){
        sum+=arr[i];
    }


    float media = sum/5;
    
    printf("Media: %.2f", media);
    return 0;
}