// Question: D

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    ll a, b, q;
    cin >> a >> b >> q;

    if(q%3 == 1){
        cout << a << "\n";
    }
    else if(q%3 == 2){
        cout << b << "\n";
    }
    else cout << (a^b) << "\n";

    return 0;
}
