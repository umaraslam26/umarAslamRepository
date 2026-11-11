/* 
Realizza un programma che simuli il funzionamento di un distributore automatico. 
All'avvio deve mostrare un menu con quattro prodotti disponibili: Acqua (€0,50), Tè (€1,20), Snack (€1,50) e Panino (€3,00). 
L'utente deve scegliere il prodotto desiderato e inserire l'importo disponibile per il pagamento. 
Utilizzando l'istruzione switch, il programma deve determinare il prezzo del prodotto selezionato e verificare se il denaro inserito è sufficiente. 
Se il pagamento è corretto, deve comunicare che l'acquisto è stato effettuato con successo e mostrare il resto. 
In caso contrario deve indicare quanto denaro manca per completare l'acquisto. 
Se viene inserita una scelta non valida, il programma deve segnalarlo all'utente.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int scelta;
	float prezzi[4] = {0.50, 1.20, 1.50, 3.00};
	float prezzo;
	float resto;
	
	cout << "        MENU        " << endl;
	cout << "1. Acqua:  0.50 euro" << endl;
	cout << "2. Te:     1.20 euro" << endl;
	cout << "3. Snack:  1.50 euro" << endl;
	cout << "4. Panino: 3.00 euro" << endl;
	
	do {
		cout << "Coda desideri? ";
		cin >> scelta;		
	} while(scelta<1 || scelta>4);

	cout << "Prezzo: " << fixed << setprecision(2)  << prezzi[scelta-1] << endl;
	
	while (1){
		cout << "Inserisci soldi: ";
		cin >> prezzo;
		if (prezzo>prezzi[scelta-1]){
			break;
		}else 
		{
			continue;
		}
	}
	
	resto=prezzo-prezzi[scelta-1];
	
	cout << "Resto: " << resto;
	return 0;
}