// Question - B

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void print(int n){
    for(int i=1; i<=n; i++){
        cout << i;
        if(i != n){
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    optimize();


    int t;
    cin >> t;
    print(t);

    return 0;
}
