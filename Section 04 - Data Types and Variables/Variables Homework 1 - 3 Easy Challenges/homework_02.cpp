#include <bits/stdc++.h>
#define omarovici ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.flush();
using namespace std;
#define ll long long
int main() {

    omarovici
    string student1 , student2;
    int id1  , id2 ;
    double grade1 , grade2;
    cout << "What is student 1 name:" ;
    cin >> student1;
    cout << "His id: " ;
    cin >> id1;
    cout << "His math exam grade: " ;
    cin >> grade1;
    cout << "What is student 2 name:" ;
    cin >> student2;
    cout << "His id: " ;
    cin >> id2;
    cout << "His math exam grade: " ;
    cin >> grade2;
    cout << "Students grades in math \n";
    cout << student1 << "(with id: " << id1 << ") got grade:" << grade1 << "\n";
    cout << student2 << "(with id: " << id2 << ") got grade:" << grade2 << "\n";
    cout << "Average grade: " << (grade1 + grade2)/2.0 << "\n";
    return 0;

}