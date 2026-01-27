// Question - C

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void recursiveMessage(int n){
    if(n > 0){
    cout << n;
    if(n > 1) cout << " ";
    recursiveMessage(n-1);
    }
}

int main()
{
    optimize();

    int n;
    cin >> n;
    recursiveMessage(n);
    cout << endl;
    return 0;
}
