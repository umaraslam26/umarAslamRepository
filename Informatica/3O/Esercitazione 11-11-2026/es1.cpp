#include<iostream>
#include<vector>

using namespace std;

void pozione(vector<int>* ptrDati, int cura){
	for(int i=0;i<ptrDati->size();i++){
		(*ptrDati)[i]+=cura;
	}
}

int main(){
	vector<int> vSquadra = {40,25,80,10};
	
	pozione(&vSquadra, 20);
	
	for(int i=0;i<vSquadra.size();i++){
		cout << vSquadra[i] << endl;
	}
	return 0;
}

