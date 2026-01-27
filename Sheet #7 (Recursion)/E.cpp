// Question - E


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void isBinary(int num) {
    if(num == 0) return;
    isBinary(num/2);
    cout << (num%2);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 0) cout << 0;
        else isBinary(n);
        cout << endl;
    }

    return 0;
}
