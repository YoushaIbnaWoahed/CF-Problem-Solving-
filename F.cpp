
// Question - F

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

    int left=0, right=n-1;
    bool Front = true;

    while(left <= right){
        if(Front){
            cout << arr[left];
            left++;
        }
        else{
            cout << arr[right];
            right--;
        }
        if(left <= right) cout << " ";
        Front = !Front;
    }
    cout << endl;

    return 0;
}
