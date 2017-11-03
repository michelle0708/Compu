#include <iostream>
using namespace std;

int main () {
	int rangomayor, rangomenor, x, total;
	cout<< " necesito un rango entre dos numeros, dame el numero mayor:  ";
	cin>> rangomayor;
	cout<< " dame el numero menor:  " ;
	cin>> rangomenor;
	total=0;
	x=rangomenor;
	while (x<=rangomayor) {
		total=total+x;
		x=x+1;
	}
	cout<< "la suma entre los numeros del rango es: " << total << endl;



return 0;
}
