// Question - H

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    double X, Y;
    cin >> X >> Y;
    double num = X/Y;
    cout << "floor " << X << " / " << Y << " = " << floor(num) << endl;
    cout << "ceil " << X << " / " << Y << " = " << ceil(num) << endl;
    cout << "round " << X << " / " << Y << " = " << round(num) << endl;
    return 0;
}
