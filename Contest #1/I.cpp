// Question - I

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int n;
    cin >> n;
    int a = n%10;
    int b = n/10;
    if(a %b == 0 || b %a == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

