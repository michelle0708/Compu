#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	int n , r ;
	int counter  = 0;
	srand(time(NULL));
	n= rand () % 100+1;
	cout<< "Adivina un numero entre 1 y 100:     " << endl;
	cin >> r;
	counter = counter +1;
	while ( n!=r) {
		if (r>n) {
			cout<< "  Trata con un numero mas chico:  " << endl;
		} else {
			cout << "  Trata con un numero mas grande:  "<< endl  ;
		}
		cout<< "    Adivina un numero entre 1 y 100:  " << endl ;
		cin >> r;
		counter = counter +1;
	}
		cout << "   Genial, lo adivinaste"<< endl ;
		cout << "Estas son las veces que tardaste en adivinarlo: ";
		cout << counter;
	
return 0; 
}
