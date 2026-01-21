// Question - F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    long long int a, b;
    cin >> a >> b;
    long long int n = a%10;
    long long int m = b%10;
    long long int sum = n+m;
    cout << sum << endl;
    return 0;
}

