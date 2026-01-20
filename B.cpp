// Question - B

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int t, lastzero = -1;
    cin >> t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin >> arr[i];

    }
    for(int i=0; i<t; i++){
        if(arr[i] == 0){
            reverse(arr.begin(), arr.begin() + i);
        }
    }
    for(auto u:arr){
        cout << u << " ";
    }
    cout << endl;
    return 0;
}
