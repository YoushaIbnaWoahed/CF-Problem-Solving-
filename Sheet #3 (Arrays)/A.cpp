// Question - A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; ++i) {
        cin >> v[i];
    }
    long long sum = 0;
    for(int i=0; i<n; ++i) {
        sum += v[i];
    }
    cout << abs(sum) << endl;
    return 0;
}
