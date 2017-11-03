#include <iostream>
#include <string>
using namespace std;

int factorial (int n) {
	if (n==0) {
	return 1;
	}
	else {
	int recurse= factorial (n-1);
	int result = n*recurse;
	return result; 
	}
}	

int main (){
	 int n;
	string resp;
	 do {
	 cout<< "escribe un numero entero positivo por favor: ";
	 cin>> n;
	 cout << "el factorial del numero es: "<< factorial (n) << endl;
	 cout << "quieres sacar el factorial de otro numero, esbribe si o no"<< endl;
	 cin>> resp;
	 } while(resp == "si");
	cout<< "gracias por participar :)"<<endl;

return 0;
}