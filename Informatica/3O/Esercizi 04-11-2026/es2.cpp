#include<iostream>

using namespace std;

int main(){
    float temp[5];
    for(int i=0;i<5;i++){
        cout << "Tempo " << i+1 << ": ";
        cin >> temp[i];
    }

    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if(temp[j]<temp[j+1]){
                swap(temp[j], temp[j+1]);
            }
            }
        }

    float somma=0;

    for(int i=0;i<5;i++){
        somma += temp[i];
    }

    float media = somma/5;
    float diff = temp[0]-temp[4];
    
    cout << "Totale tempo: " << somma << endl;
    cout << "Tempo medio: " << media << endl;;
    cout << "Differenza tra massimo e minimo: " << diff;
    return 0;
}