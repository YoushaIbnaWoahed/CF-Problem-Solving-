// Question - V

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '>') {
        if (a > b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
    else if (c == '<') {
        if (a < b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
    else if (c == '=') {
        if (a == b) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
