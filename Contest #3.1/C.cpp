// Question - C


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optimize();

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    ll sum =0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    for(int i=0; i<q; i++){
        if(arr[i] > 0){
            sum += arr[i];
        }
    }
    cout << sum << endl;

    return 0;
}
