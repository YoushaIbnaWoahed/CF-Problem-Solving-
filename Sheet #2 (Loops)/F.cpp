// Question - F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n, result;
    cin >> n;
    for(int i=1; i<=12; i++){
        result = n*i;
        cout << n << " * " << i << " = " << result << endl;
    }
    return 0;
}
















