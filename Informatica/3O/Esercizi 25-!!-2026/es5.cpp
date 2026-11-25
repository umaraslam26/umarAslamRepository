#include<iostream>

using namespace std;

int main(){
    const int n=5;
    int x;
    int arr[n]={0,1,3,5,8};

    cout << "Cosa vuoi cercare: ";
    cin >> x;
    for (int i=0;i<n;i++){
        if(x==arr[i]){
            cout << "Trovato";
        }
    }
    return 0;
}