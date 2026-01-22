// Question - M

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    char X;
    cin >> X;
    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else {
        if (isalpha(X)) {
            cout << "ALPHA" << endl;
            if (isupper(X)) {
                cout << "IS CAPITAL" << endl;
            } else {
                cout << "IS SMALL" << endl;
            }
        } else {
            cout << "INVALID INPUT (not digit or alphabet)" << endl;
        }
    }
    return 0;
}
