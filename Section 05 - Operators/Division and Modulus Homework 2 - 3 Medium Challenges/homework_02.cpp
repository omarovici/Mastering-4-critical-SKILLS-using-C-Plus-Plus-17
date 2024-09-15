#include<iostream>
using namespace std;

int main() {
    int num ;
    cin >> num;
    int last_digit = num %10;
    num = num / 10;
    int last_digit2 = num %10;
    num = num / 10;
    int last_digit3 = num %10;
    num = num / 10;

    int sum = last_digit + last_digit2 + last_digit3;
    cout << sum << "\n";

    return 0;
}