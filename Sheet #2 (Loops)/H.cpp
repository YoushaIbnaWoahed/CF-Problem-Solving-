// Question - H

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, count=0;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            count++;
            break;
        }
    }
    if(count == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
