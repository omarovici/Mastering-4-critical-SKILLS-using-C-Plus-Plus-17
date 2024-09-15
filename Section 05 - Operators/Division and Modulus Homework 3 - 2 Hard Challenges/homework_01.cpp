#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num % 2 == 0){
        cout << 100 << "\n";
    }else{
        cout << 7 << "\n";
    }

    // Udemy Course Answer :
    // int n;
	// cin >> n;

	// int is_even = n % 2 == 0;
	// int is_odd = 1 - is_even;

	// // formula of 2 parts: only one of them will be activated
	// int result = is_even * 100 + is_odd * 7;

	// cout<<result<<"\n";


    return 0;
}