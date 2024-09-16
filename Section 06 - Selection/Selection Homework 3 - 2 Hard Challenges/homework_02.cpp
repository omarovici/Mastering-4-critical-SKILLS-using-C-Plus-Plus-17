#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int s1 , e1 , s2 , e2 ;
    cin >> s1 >> e1 >> s2 >> e2;
    if (e1 < s2 || e2 < s1) 
    cout << -1 << endl;
    else 
    {
        if (s1 < s2) s1 = s2;
        if (e1 > e2) e1 = e2;
        cout << s1 << " " << e1 << endl;
    }

    return 0;
}