#include <iostream>
using namespace std;

float babylonian (double);

int main () {
	double numero, resultado;
	cout<< "dame un numero: "<< endl;
	cin>> numero;
	
	resultado= babylonian(numero);
	
	cout<< "La raiz cuadrada del numero es: "<< resultado << endl;
	
return 0;
}

float babylonian(double numero) {
	double error= 0.0001, x;
	x=numero;
	while ((x-(numero/x))>error) {
		x= (x+ numero/x)/2;
	}
	return x;
	
}
