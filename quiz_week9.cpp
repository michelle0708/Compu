#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// returns the minimum value (smallest) of a b c d
float minimum_of_4(float a, float b, float c, float d){
	float min = a;
	
	if (b < min) 
		min=b;
	if(c < min)
		min=c;
	if (d < min)
		min=d;
  return min; // this is wrong, replace this line
}

// returns the minimum value (smallest) in the array nums
// second parameter called SIZE is the size of that array
float minimum_of_list(float array[],int SIZE){
	float  min=array[0];
	
	for(int i = 1; i < SIZE; i = i + 1){
		if (array[i]<min)
			min=array[i];
	}

  return min; // this is wrong, replace this line
}

int main(){
    float min1 = minimum_of_4(3.2,4.4,0.0,-1.2);
    cout << "This should print -1.2: " << min1 << endl;

    float min2 = minimum_of_4(4.1,3.1,0.1,4.2);
    cout << "This should print 0.1: " << min2 << endl;

    // now I create an array of floats which will be used to test the
    // function
    const int SIZE = 8;
    float numbers[SIZE] = {6.2, 1.3, 4.5, -0.2, 3.1, 20.2, 1.3, 4.1};

    cout << "The numbers are ";
    for(int i = 0; i<SIZE; i++){
      cout << numbers[i] << " ";
    }
    cout << endl;

    float min3 = minimum_of_list(numbers,SIZE);
    cout << "This should print -0.2: " << min3 << endl;

}
