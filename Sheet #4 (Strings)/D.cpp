// Question - D

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optimize();

    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;

    string x = a;
    string y = b;

    x[0] = b[0];
    y[0] = a[0];

    cout << x << " " << y << endl;

    return 0;
}
