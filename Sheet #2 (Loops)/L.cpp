// Question - L

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    int result = gcd(n, m);
    cout << result << endl;
    return 0;
}
