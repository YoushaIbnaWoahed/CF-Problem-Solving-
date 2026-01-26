// Question - B

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    ll x;
    cin >> x;

    for(ll i=0; i<n; i++){
        if(v[i] == x){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
