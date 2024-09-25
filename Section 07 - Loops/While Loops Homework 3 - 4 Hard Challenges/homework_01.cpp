#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    int x ;
    cin >> x ;
    while (x--){
        string s;
        cin >> s;
        if(s.size()==2){
            if(tolower(s[0])=='n'&&tolower(s[1])=='o'||tolower(s[0])=='o'&&tolower(s[1])=='n')
            {
                cout << s << " ";
            }
        }
    }
    cout << endl;

    return 0;
}