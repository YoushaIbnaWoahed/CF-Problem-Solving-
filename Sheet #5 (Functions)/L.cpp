// Question: L

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void concatarray(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    optimize();

    int n;
    cin >> n;
    int a[n];
    int b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    concatarray(a, b, n);

    return 0;
}
