// Question: R

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double f1 = (x2 - x1)*(x2 - x1);
    double f2 = (y2 - y1)*(y2 - y1);
    double dis = sqrt(f1+f2);
    cout << fixed << setprecision(9) << dis << endl;
    return 0;
}
