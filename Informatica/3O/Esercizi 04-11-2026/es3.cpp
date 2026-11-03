#include<iostream>

using namespace std;

int main(){
    float consMen, costokWh, qFissa, iva; 

    cout << "Consumo mensile: ";
    cin >> consMen;
    cout << "Costa €/kWh: ";
    cin >> costokWh;
    cout << "Quota fissa: ";
    cin >> qFissa;
    cout << "IVA applicata: ";
    cin >> iva;

    float costoTot = consMen*costokWh;
    float imponibile = costoTot + qFissa;
    float impIVA = (imponibile*iva)/100;
    float bolTotale = imponibile + impIVA;

    cout << "Costo energia consumata: " << costoTot << endl;
    cout << "Imponibile: " << imponibile << endl;
    cout << "Importo IVA: " << impIVA << endl;
    cout << "Totale Bolletta: " << bolTotale;
    return 0;
}