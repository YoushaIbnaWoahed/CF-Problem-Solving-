// Question - I

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

    string t = s;
    reverse(t.begin(), t.end());
    if(t==s) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
