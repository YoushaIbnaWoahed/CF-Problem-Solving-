// Question - Z

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    double left = b * log(a);
    double right = d * log(c);
    if(left > right) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
