#include<iostream>

using namespace std;

int main(){
    const int n=5;
    int arr[n];
    int pari=0;

    for (int i=0;i<n;i++){
        cout << "Numero " << i+1 << ": ";
        cin >> arr[i];
    }

   for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            pari++;
        }
   }

   cout << "Ci sono " << pari << "numeri pari.";
    
    return 0;
}