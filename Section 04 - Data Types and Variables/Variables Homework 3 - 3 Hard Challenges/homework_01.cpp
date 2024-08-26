#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {

    omarovici
	int a = 0 , b = 0 , c = 0 , temp = -1 ;
	cin >> a >> b >> c ;
	temp = a ;
	a = b ;
	b = c ;
	c = temp ;
	cout << a << " " << b << " " << c ;
    
    return 0;

}