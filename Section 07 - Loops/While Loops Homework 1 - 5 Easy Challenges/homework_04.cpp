#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ;
    cin >> x ;
    ++x;
    while (--x)
    {
        int y = x;
        while (y--)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}