#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float lista[10];
	
	for(int i = 0; i < 10 ; i = i + 1){
		cout<< "Dame un numero" <<endl;
		cin>> lista[i];
	}
		
	float sum = lista[0];

	for(int i = 1; i < 10; i = i + 1){
			sum=sum + lista[i]; 
	}
	cout << "sum is " << sum << endl;
	
	float promedio;
	promedio=sum/10;
	
	cout<<"El promedio es: " << promedio<< endl;
	
		float standard;
	standard=0.0;
	for (int i=0; i< 10 ; i=i+1)
	{
	standard=standard + (lista[i]-promedio)*(lista[i] -promedio) ;
	}	
	standard= sqrt (standard) ;
	standard= standard /10 ;
	cout<< "La desviacion estandar es: " << standard << endl;

return 0;
}