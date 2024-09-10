#include<iostream>
using namespace std;

int main() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c, 
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c, 
		   c = a+b, a = b, b = c) <<endl; 

		   // Output: 8

	return 0;
}

