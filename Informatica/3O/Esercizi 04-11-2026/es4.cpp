#include<iostream>
#include<string>
using namespace std;

int main(){
    string nome;
    int isee;
    cout << "Nome: ";
    cin >> nome;
    cout << "ISEE: ";
    cin >> isee;

    int tasse;

    if (isee<=15000 && isee>=0){
        tasse=500;
    } else if(isee>15000 && isee<=29999){
        tasse=1200;
    } else if (isee>=30000 && isee<=49999){
        tasse=2000;
    } else {
        tasse=3000;
    }

    cout << "Nome: " << nome << endl;
    cout << "Tassa: " << tasse;

    return 0;
}