#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	string giorni[7]={"Lunedi", "Martedi", "Mercoledi", "Giovedi", "Venerdi", "Sabato", "Domenica"};
	float incassi[7];
	float somma;
	float max=0;
	int giorno;
	float media;
	int mag;
	string giorni2[7];
	float incassi2[7];
	
	for(int i=0;i<7;i++){
		do {
		    cout << giorni[i] << ": ";
			cin	>> incassi[i];
		} while(incassi[i]<0);	
		if(incassi[i]>max){
			max=incassi[i];
		}
		if(incassi[i]>=1000){
			mag++;
			giorni2[i]=giorni[i];
			incassi2[i]=incassi[i];
		}
	}
	
	for (int i=0;i<7;i++){
		somma+=incassi[i];
		giorno=i;
	}
	
	media =somma/7;
	
	cout << "Incasso totale: " << somma;
	cout << endl << "Incasso medio giornaliero: " << media;
	cout << endl << "Incasso Massimo: " << max << " Giorno: " << giorni[mag];
	cout << endl << "Giorni con piu di 1000 euro al giorno: " << endl;
	for (int i=0;i<mag;i++){
		cout << giorni2[i] << ": " << incassi2[i] << endl;
	}
	
	return 0;	
}
