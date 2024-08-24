#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {

    omarovici
    int even = 0 , odd = 0 ;
    for (size_t i = 1; i <= 8; i++)
    {
        int x ; cin >> x ;
        if (i % 2 == 0) even += x ;
        else odd += x ;
    }

    cout << even << " " << odd << endl;
    
    return 0;

}