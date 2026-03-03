// Question: M

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int distinctNum(int arr[], int n){
    set<int> distinct;
    for(int i=0; i<n; i++){
        distinct.insert(arr[i]);
    }
    return distinct.size();
}

int main()
{
    optimize();

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << distinctNum(arr, n) << endl;

    return 0;
}
