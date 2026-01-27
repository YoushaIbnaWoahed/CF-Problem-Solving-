// Question - G

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int minimum = *min_element(v.begin(), v.end());
    int maximum = *max_element(v.begin(), v.end());
    cout << minimum << " " << maximum << endl;
    return 0;
}
