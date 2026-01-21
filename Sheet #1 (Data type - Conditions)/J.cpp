// Question - J

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    if(n%m==0 || m%n == 0) cout << "Multiples" << endl;
    else cout << "No Multiples" << endl;
    return 0;
}

