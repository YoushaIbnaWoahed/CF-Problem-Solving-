// Question - T

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int a, b, c;
    cin >> a >> b >> c;
    vector<int>v={a, b, c};
    sort(v.begin(), v.end());
    for(auto u:v) cout << u << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
