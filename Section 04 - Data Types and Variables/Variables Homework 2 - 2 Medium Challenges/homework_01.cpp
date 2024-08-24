#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {

    omarovici
    int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 0 , num 2 = 1 , num 3 = 1 , print {1}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 1 , num 2 = 1 , num 3 = 2 , print {2}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 1 , num 2 = 2 , num 3 = 3 , print {3}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 2 , num 2 = 3 , num 3 = 5 , print {5}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 3 , num 2 = 5 , num 3 = 8 , print {8}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 5 , num 2 = 8 , num 3 = 13 , print {13}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 8 , num 2 = 13 , num 3 = 21 , print {21}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 13 , num 2 = 21 , num 3 = 34 , print {34}
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	// num 1 = 21 , num 2 = 34 , num 3 = 55 , print {55}

	// https://en.wikipedia.org/wiki/Fibonacci_number

    
    return 0;

}