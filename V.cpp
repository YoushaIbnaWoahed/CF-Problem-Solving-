// Question - V

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    int n;
    cin >> n;
    int x=1;
    for(int i=0; i<n; i++){
        cout << x << " " << x+1 << " " << x+2 << " PUM" <<endl;
        x+=4;
    }
    return 0;
}
