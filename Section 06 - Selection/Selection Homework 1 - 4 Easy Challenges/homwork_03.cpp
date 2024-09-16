#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int a , b , c ;
    cin >> a >> b >> c ;
    if (a>=100) a = 0;

    if (b>=100) b = 0;

    if (c>=100) c = 0;
    
    if(a>b && a>c) cout << a << endl;

    else if (b>a && b>c) cout << b << endl;

    else if (c>a && c>b) cout << c << endl;

    else cout << -1 << endl;

    return 0;
}