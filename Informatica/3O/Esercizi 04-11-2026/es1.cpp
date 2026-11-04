#include<iostream>

using namespace std;

int main(){
    float capitale, interesse;
    int anni;
    
    cout << "Capitale: ";
    cin >> capitale;
    cout << "Interesse: ";
    cin >> interesse;
    cout << "Anni: ";
    cin >> anni;

    float interesseFinale = (capitale*interesse*anni)/100;
    float montante = capitale + interesseFinale;
    float guadAnnuale = interesseFinale/anni;

    cout << "Int montante: " << interesseFinale << endl << "Montante: " << montante << endl << "Guadagno medio: " << guadAnnuale;

    return 0;
}