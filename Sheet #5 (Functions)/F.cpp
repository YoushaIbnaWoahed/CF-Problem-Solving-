// Question: F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

ll power(ll base, ll exp){
    ll result = 1;
    for(ll i=0; i<exp; i++){
        result *= base;
    }
    return result;
}

ll eqSum(ll x, ll n){
    ll sum = 0;
    sum += (power(x, 0)-1);
    for(ll i=2; i<=n; i+=2){
        sum += power(x, i);
    }
    return sum;
}

int main()
{
    optimize();

    ll x, n;
    cin >> x >> n;

    cout << eqSum(x, n) << endl;

    return 0;
}

