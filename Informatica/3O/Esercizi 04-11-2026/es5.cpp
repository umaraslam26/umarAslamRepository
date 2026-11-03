#include<iostream>

using namespace std;

int main(){
    float incasso[7];
    float somma=0;
    float media;
    int j=0;

    for (int i=0;i<7;i++){
        cout << "Giorno " << i+1 << ": ";
        cin >> incasso[i];
    }

    for (int i=0;i<7;i++){
        somma+=incasso[i];
    }

    media = somma/7;

    for(int i=0;i<7;i++){
        if(incasso[i]>1000){
            j++;
        }
    } 

    for (int i=0;i<7;i++){
        cout << i+1 << ". " << incasso[i] << endl;
    }

    cout << "Somma: " << somma << endl;
    cout << "Media: " << media << endl;
    cout << "Giorni con un incasso superiore a 1000: " << j;
    return 0;
}