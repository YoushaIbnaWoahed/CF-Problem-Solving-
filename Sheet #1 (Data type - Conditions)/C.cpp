// Question - C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    long long  X, Y;
    cin >> X >> Y;
    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;
    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;
    return 0;
}
