#include<stdio.h>

int main(){
    int n;
    printf("Quanti numeri: ");
    scanf("%d", &n);

    float p[n];
    int q[n];
    for (int i=0;i<n;i++){
        printf("Articolo %d", i+1);
        printf("\nPrezzo: ");
        scanf("%f", &p[i]);
        printf("Quantita: ");
        scanf("%d", &q[i]);
    }

    float st[n];

    for (int i=0;i<n;i++){
        st[i] = p[i]*q[i];
        printf("\nSubtotale %d: %.2f x %d = %.2f", i+1, p[i], q[i], st[i]);
    }

    float s = 0;
    for(int i=0;i<n;i++){
        s+=st[i];
    }

    printf("\nTotale: %.2f", s);
    return 0;
}