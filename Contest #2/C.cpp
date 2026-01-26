// Question - C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    optimize();
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> result;

    // groups of k no of elements
    for(int i = 0; i + k <= n; i += k) {
        int group_min = *min_element(v.begin() + i, v.begin() + i + k);
        result.push_back(group_min);
    }

    // Handling remaining elements
    int remaining = n % k;
    if(remaining > 0) {
        int remaining_min = *min_element(v.begin() + n - remaining, v.end());
        result.push_back(remaining_min);
    }

    for(int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
