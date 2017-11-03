#include <iostream>
using namespace std;

int suma (int a, int b) {
	int suma;
	suma=  a +  b;
	return suma;
}
int resta (int a, int b){
	int resta;
	resta= a -  b;
	return resta;
}
int division (int a, int b){
	int division;
	division= a /  b;
	return division;
}
int residuo (int a, int b){
	int residuo;
	residuo= a %  b;
	return residuo;
}
int multiplicacion (int a, int b){
	int multiplicacion;
	multiplicacion= a *  b;
	return multiplicacion;
}


int main(){
	int a,b;
	cout<<"numero a: ";
	cin>>a;
	cout<<"numero b: ";
	cin>>b;
	
	
	cout << "la suma es:  " << suma ( a , b ) << endl;
	cout << "la resta es:  " << resta ( a , b ) <<endl;
	cout << "la multiplicion es:  "<< multiplicacion ( a , b ) <<endl;
	cout << "la divisiones  :"<< division( a , b ) <<endl;
	cout << "el residuo es  :"<< residuo ( a , b ) <<endl;
	
	return 0;
}

