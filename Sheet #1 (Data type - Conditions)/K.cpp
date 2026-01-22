// Question - K

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int l, m, n;
    cin >> l >> m >> n;
    int x = max({l, m, n});
    int y = min({l, m, n});
    cout << y << " " << x << endl;
    return 0;
}
