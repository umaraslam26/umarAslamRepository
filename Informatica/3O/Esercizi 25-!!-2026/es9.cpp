#include<iostream>

using namespace std;

int main(){
    const int n=5;
    int arr[n];
    int min=0;
    int posMin=0;

    for (int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> arr[i];
    }
    
    for (int i=0;i<n;i++){
        if (arr[i]>min){
            min=arr[i];
            posMin=i;
        }
    }

    cout << "Il numero minimo e " << min << " e si trova nella posizione " << posMin;
    return 0;
}