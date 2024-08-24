#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {

    omarovici
	int num1 = 0 , num2 = 0 , num3 = 0;
	cin >> num1 >> num2 ;
	num3 = num1;
	num1 = num2;
	num2 = num3;

	cout << num1 << " " << num2;
    
    return 0;

}