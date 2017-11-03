#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct total {
	int lineas, letras;
};

total lyl (string nombre);

int main () {
	struct total x;
	x = lyl ("filename.txt");
	
	cout<< "el numero total de letras es : "<<x.letras<<endl;
	cout<< "el numero total de lineas es : "<<x.lineas<<endl;
	
	return 0; 
}

struct total lyl(string nombre) {
	struct total x;
	string line;
	x.letras= 0;
	x.lineas=0;
	ifstream file (nombre.c_str());
	
	if (file.is_open()) {
		while (getline (file, line)){
			x.lineas++;
			int n=line.length();
			x.letras= n + x.letras;
		}
		file.close();
	}
	return x;
}
			