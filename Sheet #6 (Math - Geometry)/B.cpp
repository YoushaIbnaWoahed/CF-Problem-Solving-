// Question - B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

bool isPrime(long long n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 == 0) return false;
    for(long long i=3; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    optimize();

    long long n;
    cin >> n;
    if(isPrime(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
