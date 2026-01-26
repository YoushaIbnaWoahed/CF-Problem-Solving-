// Question - E

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optimize();

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int>:: iterator minimum = min_element(arr.begin(), arr.end());
    int minimumPosition = min_element(arr.begin(), arr.end()) - arr.begin();
    cout << *minimum << " " << minimumPosition+1 << endl;

    return 0;
}
