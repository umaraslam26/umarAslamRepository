#include<iostream>

using namespace std;

int main(){
    const int n=5;
    int x;
    int cont=0;
    int arr[n]={4,7,8,9,4};

    cout << "Cosa vuoi cercare? ";
    cin >> x;

    for (int i=0;i<n;i++){
        if (arr[i]==x){
            cont++;
        }
    }

    cout << "Il numero è stato trovato " << cont << "volte.";
    return 0;
}