#include<iostream>
using namespace std;

int main() {
    int n , m ;
    cin >> n >> m;
    cout << abs((n/m)*m - n) << endl;
    return 0;
}