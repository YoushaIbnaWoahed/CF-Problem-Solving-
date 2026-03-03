// Question: H

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--){
        int a;
        char c;
        cin >> a >> c;
        for(int i=0; i<a; i++){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
