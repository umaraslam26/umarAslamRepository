#include<iostream>

using namespace std;

int main(){
    int capitale, interesse, anni;
    cout << "Capitale: ";
    cin >> capitale;
    cout << "Interesse: ";
    cin >> interesse;
    cout << "Anni: ";
    cin >> anni;

    int interesseFinale = (capitale*interesse*anni)/100;
    int montante = capitale + interesseFinale;
    int guadAnnuale = interesseFinale/anni;

    cout << "Int montante: " << interesseFinale << endl << "Montante: " << montante << endl << "Guadagno medio: " << guadAnnuale;

    return 0;
}