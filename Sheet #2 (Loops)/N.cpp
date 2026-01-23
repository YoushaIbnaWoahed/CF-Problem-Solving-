// Question - N

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s;
    int n;
    cin >> s >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        for(int j=0; j<x; j++){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
