// Question - B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int n;
    cin >> n;
    bool hasEven = false;
    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
        hasEven = true;
    }
    if (!hasEven) {
        cout << -1 << endl;
    }
    return 0;
}
