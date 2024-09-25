#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main()
{
    omarovici 

    int star = 1, x;
    cin >> x;
    int y = x;

    while (--x)
    {
        int s = x + 1;
        while (s--)
        {
            cout << " ";
        }
        for (size_t i = 0; i < star; i++)
        {
            cout << "*";
        }
        cout << endl;
        star += 2;
    }

    cout << " ";
    for (size_t i = 0; i < star; i++)
    {
        cout << "*";
    }
    cout << endl;

    while (y--)
    {
        ++x;
        int s = x;
        while (s--)
        {
            cout << " ";
        }
        for (size_t i = 0; i < star; i++)
        {
            cout << "*";
        }
        cout << endl;
        star -= 2;
    }
    
    cout << endl;

    return 0;
}