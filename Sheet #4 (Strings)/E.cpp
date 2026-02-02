// Question - E

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    string s;
    cin >> s;

    ll sum = 0;
    for(char c:s){
        sum += (c - '0');
    }
    cout << sum << endl;

    return 0;
}
