// Question - G

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

ll sumofdivisior(ll n){
    ll summation = 0;
    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            summation += i;
            if(i != n/i){
                summation += n/i;
            }
        }
    }
    return summation;
}

int main(){
    optimize();

    ll n;
    cin >> n;
    cout << sumofdivisior(n) << endl;

    return 0;
}
