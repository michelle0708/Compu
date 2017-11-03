#include <iostream>
#include<cmath>
using namespace std;

float distancia (float x1, float y1, float x2, float y2)
{
	return sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
}
int main () {
	float x1,x2,y1,y2;
cout<< "Dame un numero"<< endl;
cin>> x1;
cout<< "Dame un numero"<< endl;
cin>> y1;
cout<< "Dame un numero"<< endl;
cin>> x2;
cout<< "Dame un numero"<< endl;
cin>> y2;


cout<< "La distancia entre los dos puntos es: "<<distancia(x1,y1,y2,x2);

return 0;
}