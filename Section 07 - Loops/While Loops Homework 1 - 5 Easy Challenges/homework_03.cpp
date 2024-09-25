#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ;
    cin >> x ;
    int star = 1 ;
    while (star!=x+1){
        int star2 = star;
        while(star--){
            cout << "*" ;
        }
        cout << endl ;
        star = ++star2;
    }

    return 0;
}