// Question - C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    char C;
    cin >> C;
    if (C == 'z') {
        cout << 'a' << endl;
    } else {
        cout << static_cast<char>(C + 1) << endl;
    }
    return 0;
}
