// Question: E

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    ll t;
    cin >> t;
    ll k = (sqrt(1+8.0 * t)-1)/2;
    cout << k << endl;
    return 0;
}
