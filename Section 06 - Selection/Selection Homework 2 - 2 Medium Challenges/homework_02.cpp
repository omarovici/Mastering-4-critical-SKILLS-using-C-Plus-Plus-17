#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x , y , ans = INT_MIN; cin >> x;
    while (x--)
    {
        cin >> y;
        if (y>ans) ans = y;
    }
    cout << "Biggest number is: " << ans << endl;

    return 0;
}