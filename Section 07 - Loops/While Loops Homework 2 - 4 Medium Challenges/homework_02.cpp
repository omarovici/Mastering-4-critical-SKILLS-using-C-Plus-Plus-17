#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ; cin >> x ;
    for (size_t i = 0; i <= 100; i++)
    {
        if(i%8==0) {
            cout << i << " ";
        }
        else if(i%3==0&&i%4==0){
            cout << i << " ";
        }
    }
    cout << endl;
    
    

    return 0;
}