#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int a , b ;
    cin >> a >> b ;
    int add = a + b ;
    int minus = a - b ;
    float divide = a / b ;
    int multiply = a * b ;

    cout << a << " + " << b << " = " << add << endl;
    cout << a << " - " << b << " = " << minus << endl;
    cout << a << " * " << b << " = " << multiply << endl;
    cout << a << " / " << b << " = " << divide << endl;

}