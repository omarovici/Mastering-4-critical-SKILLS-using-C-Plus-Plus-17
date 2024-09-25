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
        int y ;
        cin >> y;
        int sum = 0;
        for (size_t i = 1; i <= y; i++)
        {
            int z ;
            cin >> z;
            sum += pow(z, i); 
        }
        cout << sum << endl;
    }
    

    return 0;
}