// Question - R

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    long long n, y, m, d;
    cin >> n;
    y = n/365;
    n = n%365;
    m = n/30;
    d = n%30;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
    return 0;
}
