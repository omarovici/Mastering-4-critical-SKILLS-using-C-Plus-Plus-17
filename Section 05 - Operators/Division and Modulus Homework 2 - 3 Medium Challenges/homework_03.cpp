#include<iostream>
using namespace std;

int main() {
    int num ;
    cin >> num;
    num = (num % 10000) / 1000;
    cout << num << "\n";

    return 0;
}