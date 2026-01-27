// Question - B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void recursiveMessage(int current, int n){
    if(current > n) return;
    cout << current << endl;
    recursiveMessage(current + 1, n);
}

int main()
{
    optimize();

    int n;
    cin >> n;
    recursiveMessage(1, n);
    return 0;
}
