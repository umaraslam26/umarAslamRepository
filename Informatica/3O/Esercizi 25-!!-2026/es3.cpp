#include<iostream>

using namespace std;

int main(){
    const int n=5;
    float somma=0;
    float num[n];

    for (int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> num[i];
    }

    for (int i=0;i<n;i++){
        somma+=num[i];
    }

    cout << "Somma: " << somma;
    return 0;
}