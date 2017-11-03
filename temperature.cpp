#include <iostream>
using namespace std;

int main () {
	int f,c;
	cout << "grados fahrenheit:  ";
	cin >> f;

	c=5*(f-32)/9;
	cout<<"grados celsius:  " << c << endl;
	if (c >= 100) {
		cout<< "El agua hierve a esta temperatura";
	} else {
		cout<< "El agua no hierve a esta temperatura";
	}
	return 0;
}
