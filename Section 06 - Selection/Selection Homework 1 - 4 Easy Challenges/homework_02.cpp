#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int a , b , c ;
    cin >> a >> b >> c ;

    if(a < b && a < c) {
        cout << a << " ";
        if(b < c) cout << b << " " << c ;
        else cout << c << " " << b ;
    }

    else if (b < a && b < c) {
        cout << b << " ";
        if(a < c) cout << a << " " << c ;
        else cout << c << " " << a ;
    }

    else if (c < a && c < b) {
        cout << c << " ";
        if(a < b) cout << a << " " << b ;
        else cout << b << " " << a ;
    }
    
    cout << endl;

    return 0;
}