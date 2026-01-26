// Question - D

#include<bits\stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        if(l>r) swap(l, r);
        ll n = r-l+1;
        ll sum = n*(l+r)/2;
        cout << sum << endl;
    }
    return 0;
}
