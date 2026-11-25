#include<iostream>

using namespace std;

int main(){
    const int n=5;
    int arr[n];
    int max=0;
    int posMax=0;

    for (int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
            posMax=i;
        }
    }

    cout << "Il numero massimo e " << max << " e si trova nella posizione " << posMax;
    return 0;
}