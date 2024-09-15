#include<iostream>
using namespace std;

int main() {
	double a , b , c , d , e;

	cin >> a >> b >> c >> d >> e;

	cout << "A ) Average of 5 nums: " << (a + b + c + d + e)/5 << endl;
	cout << "B ) The sum of first 3 nums / the sum of last 2 nums: " << (a + b + c)/ (d + e) << endl;
	cout << "C )The Average of the first 3 nums / the Average of the last 2 nums: " << ((a + b + c) / 3) / ((d + e) / 2) << endl;
	
	// The Realation between B and C is : C = 3/2 * B

	return 0;
}

