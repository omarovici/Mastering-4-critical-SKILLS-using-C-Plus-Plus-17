#include <bits/stdc++.h>
#define omarovici                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cout.flush();
using namespace std;
#define ll long long
int main()
{
    omarovici int n, first_spaces = 0;
    cin >> n;
    int middle_spaces = n - 2, check = --n / 2;
    int z = check;
    while (check)
    {
        for (size_t i = 0; i < first_spaces; i++)
        {
            cout << " ";
        }
        cout << "*";
        for (size_t i = 0; i < middle_spaces; i++)
        {
            cout << " ";
        }
        cout << "*" << endl;
        first_spaces++;
        middle_spaces -= 2;
        --check;
    }
    for (size_t i = 0; i < first_spaces; i++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    check = z;
    while (check)
    {
        --first_spaces;
        for (size_t i = 0; i < first_spaces; i++)
        {
            cout << " ";
        }
        cout << "*";
        middle_spaces += 2;
        for (size_t i = 0; i < middle_spaces; i++)
        {
            cout << " ";
        }
        cout << "*" << endl;
        --check;
    }

    return 0;
}