// Question - F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int countdivisions(ll x){
    if(x == 0) return 0;

    int count = 0;
    while(x % 2 == 0){
        x = x/2;
        count++;
    }
    return count;
}

int main()
{
    optimize();

    int t;
    cin >> t;
    int max_divisions = 0;
    while(t--){
        ll x;
        cin >> x;

        int divisions = countdivisions(x);
        max_divisions = max(max_divisions, divisions);
    }
    cout << max_divisions << endl;
    return 0;
}
