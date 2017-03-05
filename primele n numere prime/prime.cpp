//Nicorici Adrian, 15.03.2014
//Sa se gaseasca primele n numere prime.

#include <iostream>
using namespace std;

int numar,i,d=2,cod=0;

void prim(int numar){
	for(i=2;i<=numar;i++){
		while(d<=sqrt(i) && cod==0){
			if(i % d == 0){
				cod=1;
			}
			d++;
		}
		if(cod==0){
			cout << "Numarul " << i << "este prim" << endl;
		}
		cod=0;
		d=2;
	}	
}

int main(){
	
	cout << "Introduceti un numar!";
	cin >> numar;
	if(numar <0){
		cout << "Numarul introdus trebuie sa fie pozitiv" << endl;
	}
	else 
		prim(numar);	



	system("pause");
	return 0;	
}