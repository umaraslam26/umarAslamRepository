#include<iostream>
#include<string>
#define ITAL "Italiano"
#define MATE "Matematica"
#define INFO "Informatica"

using namespace std;


int main(){
	string materie[3]={ITAL,MATE,INFO};
	float somma=0;
	float voto;
	int otto=0;
	
	for(int i=0;i<3;i++){
		do {
			cout <<"Voto " << materie[i] <<": ";
		    cin >> voto;
		} while(voto>10 || voto<=0);
		
		somma+=voto;
		
		if (voto>=8){
			otto++;
		}
	}
	
	float media=somma/3;
	
	if (media<6){
		cout << "Media: " << media << " Insufficiente.";
	} else if(media>=6 && media<=8){
		cout << "Media: " << media << " Sufficiente.";
	} else if(media>=8&&media<9){
		cout << "Media: " << media << " Buono.";
	} else if (media>=9){
		cout << "Media: " << media << " Ottimo.";
	}
	
	if(otto==3){
		cout << endl << "Meritevole.";
	}

	return 0;
}