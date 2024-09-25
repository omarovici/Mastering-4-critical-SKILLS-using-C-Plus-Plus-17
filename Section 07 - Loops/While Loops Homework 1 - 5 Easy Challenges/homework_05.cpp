#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int n ;
    cin >> n ;
    double even = 0, odd = 0 , e = 0, o = 0;
    for (size_t i = 1; i <= n; i++)
    {
        int x ;
        cin >> x ;
        if(i%2==0)
            {even+=x; e++;}
        else
            {odd+=x; o++;}
    }
    cout << odd/o << " " << even/e << endl;

    

    return 0;
}