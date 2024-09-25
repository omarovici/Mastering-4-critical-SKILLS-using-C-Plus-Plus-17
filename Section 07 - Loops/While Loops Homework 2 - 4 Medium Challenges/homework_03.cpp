#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long

int main() {
    omarovici
    int n ;
    cin >> n ;
    for (size_t i = 0; i < INT32_MAX; i++)
    {
        if(i%3==0&&i%4!=0){
            cout << i << " ";
            n--;
        }
        if(n==0) break;
    }
    cout << endl;

    return 0;
}