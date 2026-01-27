// Question - A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void recursiveMessage(int n){
    if(n > 0){
    cout << "I love Recursion" << endl;
    recursiveMessage(n-1);
    }
}

int main()
{
    optimize();

    int n;
    cin >> n;
    recursiveMessage(n);
    return 0;
}
