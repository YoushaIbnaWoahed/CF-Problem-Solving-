// Question - E

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) {
        cout << "NO" << endl;
        return 0;
    }
    if(abs(a - b) <= 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
