// Question - H

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

long long gcd(long long a, long long b){
    while(b!=0){
        long long temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b){
    return(a/gcd(a,b)*b);
}

int main()
{
    optimize();

    long long a, b;
    cin >> a >> b;

    long long gotgcd = gcd(a, b);
    long long gotlcm = lcm(a,b);

    cout << gotgcd << " " << gotlcm << endl;
    return 0;
}
