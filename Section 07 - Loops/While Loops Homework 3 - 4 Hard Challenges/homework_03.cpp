#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x , y ;
    cin >> x >> y ;
    int X = 1 , Y = 1;
    while (X!=x+1)
    {
        while (Y!=y+1)
        {
            cout << X << " x " << Y << " = " << X*Y << endl;
            Y++;
        }
        Y = 1;
        X++;
    }
    cout << endl;
    

    return 0;
}