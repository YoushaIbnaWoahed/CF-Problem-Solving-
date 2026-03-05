// Question: K

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

ll factorial(int n){
    ll fact = 1;
    for(int i=1; i<= n; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    optimize();

    int a, b;
    cin >> a >> b;
    ll npr = factorial(a) / factorial(a-b);
    ll ncr = factorial(a) / (factorial(b)*factorial(a-b));
    cout << ncr << " " << npr << endl;

    return 0;
}
