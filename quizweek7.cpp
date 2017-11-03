#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// input is a non-negative value
// output is the factorial of n.
// remember that 0! is 1
// fix the wrong answer of always 42
int factorial(int n){
	if (n==0) {
		return 1;
	} else 
	{
		int recurse = factorial (n-1);
		int result = n*recurse ;
	return result;
	}
}
// input is a non-negative value
// output is the nth Fibonacci number, thus converting to a function the sequence
// of Fibonacci which stars with zero
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.
// fix the wrong answer of always 42
int fibonacci(int n){
    if(n == 0 || n == 1) {
       return n;
    } else {
		int result = fibonacci(n - 2) + fibonacci(n - 1);
       return result;
	}
}
  
int main(){

  for (int i = 0; i <= 10; i++){
    cout << "Factorial of " << i << " is " << factorial(i) << endl;
    cout << "Fibonacci " << i << " is " << fibonacci(i) << endl;
    cout << endl;
  }
  return 0;
}
