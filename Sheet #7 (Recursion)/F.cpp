// Question - F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void evenIndices(const vector<int> &arr, int index){
    if(index < 0) return;
    cout << arr[index] << " ";
    evenIndices(arr, index - 2);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int lastIndex = n-1;
    int startIndex;
    if(lastIndex % 2 == 0){
        startIndex = lastIndex;
    }
    else{
        startIndex = lastIndex - 1;
    }

    evenIndices(v, startIndex);
    cout << endl;
    return 0;
}
