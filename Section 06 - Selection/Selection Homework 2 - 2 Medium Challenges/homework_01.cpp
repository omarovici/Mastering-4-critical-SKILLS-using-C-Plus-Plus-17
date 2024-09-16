#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x = INT_MIN;
    int y = 0 ; 
    for (int i = 0; i < 10; ++i) {
        cin >> y;
        if (y > x) x = y;
    }

    cout << "Biggest number is: " << x << endl;

    return 0;
}