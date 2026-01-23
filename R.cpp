// Question - R

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    while(true){
        int n, m, sum=0;
        cin >> n >> m;
        int p = min(n, m);
        int q = max(n, m);
        if(p <= 0 || q <= 0){
            break;
        }
        for(int i=p; i<= q; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
