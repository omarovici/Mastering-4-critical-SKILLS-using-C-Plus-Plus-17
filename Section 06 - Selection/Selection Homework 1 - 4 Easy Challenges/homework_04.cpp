#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ; cin >> x ;

    int a , b , c , d , e ;

    cin >> a >> b >> c >> d >> e ;

    int cnt = 0 , cnt2 = 0;

    if(x >= a) cnt++; // else cnt2++;

    if(x >= b) cnt++; // else cnt2++;

    if(x >= c) cnt++; // else cnt2++;

    if(x >= d) cnt++; // else cnt2++;

    if(x >= e) cnt++; // else cnt2++;

    cout << "Numbers greater than or equal to x: " << cnt << endl;
    
    cout << "Numbers less than x: " << 5-cnt << endl;

    return 0;
}