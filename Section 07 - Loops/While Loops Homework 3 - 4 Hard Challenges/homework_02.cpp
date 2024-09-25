#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {
    omarovici
    string s ;
    cin >> s ;
    reverse(s.begin(), s.end());
    cout << s << " ";
    cout << stoi(string(1, s[0]))*3 << stoi(string(1, s[1]))*3 << stoi(string(1, s[2]))*3 << endl;

    return 0;
}
