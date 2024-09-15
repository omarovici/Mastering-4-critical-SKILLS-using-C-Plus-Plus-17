#include<iostream>
using namespace std;

int main() {
    int num ;
    cin >> num;
    cout << num/360 << " ";
    num = num % 360;
    cout << num/30 << " ";
    num = num % 30;
    cout << num << "\n";

    return 0;
}