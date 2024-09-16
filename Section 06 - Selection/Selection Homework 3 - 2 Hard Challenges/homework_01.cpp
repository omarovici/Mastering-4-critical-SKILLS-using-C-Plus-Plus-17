#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ; cin >> x;
    int s1 , e1 , s2 , e2 , s3 , e3;
    cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    int cnt = 0 ;
    if(x >= s1 && x <= e1) cnt++;
    if(x >= s2 && x <= e2) cnt++;
    if(x >= s3 && x <= e3) cnt++;

    cout << cnt << endl;

    return 0;
}