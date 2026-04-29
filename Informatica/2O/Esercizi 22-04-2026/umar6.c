#include<stdio.h>


void swap(float *a, float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
	float temp[10];
    float delta[10];
    float somma=0.0;
    float media;
    float diff;
    delta[0]=0.0;

    for (int i=0;i<10;i++){
        printf("Temperatura: ");
        scanf("%f", &temp[i]);
    }

    for (int i=0;i<10;i++){
        somma+=temp[i];
    }

    for (int i=0;i<10;i++){
        for (int j=0;i<9;i++){
            if (temp[j]>temp[j+1]){
                swap(&temp[j], &temp[j+1]);
            }
        }
    }
    media=somma/10;
    printf("Media settimanale: %.2f\n", media);
    printf("Temperatura massima: %.2f\n", temp[9]);
    printf("Temperatura minima: %.2f\n", temp[0]);

    for (int i=1;i<10;i++){
        delta[i]=temp[i] - temp[i-1];

    }

    for (int i=0;i<10;i++){
        printf("Differenza: %.2f", delta[i]);
        if (delta[i]<0){
            printf("  Scesa\n");
        } else if(delta[i]>0){
            printf("  Aumentata\n");
        } else {
            printf("  Invariata\n");
        }
    }


	
	return 0;
}