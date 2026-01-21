// Question - D

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    long long  X, Y, Z, W;
    cin >> X >> Y >> Z >> W;
    long long difference = (X*Y)-(Z*W);
    cout << "Difference = " << difference << endl;
    return 0;
}
