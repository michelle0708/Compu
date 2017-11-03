#include <iostream>
using namespace std;

int main(){
	int a,b,suma,resta,multiplicacion,division,residuo;
	cout<<"numero a: ";
	cin>>a;
	cout<<"numero b: ";
	cin>>b;
	suma=a+b;
	resta=a-b;
	multiplicacion=a*b;
	division=a/b;
	residuo=a%b;
	cout<<"la suma es:  "<<suma<<endl;
	cout<<"la resta es:  "<<resta<<endl;
	cout<<"la multiplicion es:  "<<multiplicacion<<endl;
	cout<<"la divisiones  :"<<division<<endl;
	cout<<"el residuo es  :"<<residuo<<endl;
	
	return 0;
}

