// Question - A

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

bool isPowerOfTwo(long long n){
    return (n>0) && ((n&(n-1)) == 0);
}

int main()
{
    optimize();

    long long n;
    cin >> n;
    if(isPowerOfTwo(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
