#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int min = INT32_MAX;
        while (n--)
        {
            int y ;
            cin >> y;
            if(y<min) min = y;
        }
        cout << min << endl;
    }

    return 0;
}