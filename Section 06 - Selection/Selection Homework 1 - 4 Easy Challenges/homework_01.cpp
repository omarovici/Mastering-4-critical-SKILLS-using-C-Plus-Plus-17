#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int a , b ;
    cin >> a >> b ;

    if(a%2!=0 && b%2!=0) cout << a*b << endl;

    else if (a%2==0 && b%2==0) cout << a/b << endl;

    else if (a%2!=0 && b%2==0) cout << a+b << endl;
    
    else cout << a-b << endl;

    return 0;
}