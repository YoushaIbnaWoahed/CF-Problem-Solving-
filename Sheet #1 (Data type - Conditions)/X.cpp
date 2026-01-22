// Question - X

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int left = max(l1, l2);
    int right = min(r1, r2);
    if (left <= right) {
        cout << left << " " << right << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
