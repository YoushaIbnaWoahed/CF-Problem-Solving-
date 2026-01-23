// Question - X

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = __builtin_popcount(n);
        int result = (1 << count) - 1;
        cout << result << endl;
    }
    return 0;
}
