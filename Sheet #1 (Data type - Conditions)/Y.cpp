// Question - Y

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long p = 1;
    p = (p * (a % 100)) % 100;
    p = (p * (b % 100)) % 100;
    p = (p * (c % 100)) % 100;
    p = (p * (d % 100)) % 100;
    cout << setw(2) << setfill('0') << p << endl;
    return 0;
}
