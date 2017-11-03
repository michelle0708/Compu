#include <iostream>
using namespace std;

int sumsquare_list (int list [], int size) {
	int total = 0;
	for (int i=0; i < size ; i=i+1) {
		total += list [i]* list [i];
	}
	return total;
}

int main (){
int lista[5];
	
	for(int i = 0; i <  5; i = i + 1){
		cout<< "Dame un numero" <<endl;
		cin>> lista[i];
	}
cout<< "La suma de los numeros cuadrados es: " << sumsquare_list(lista,5);


return 0;
}