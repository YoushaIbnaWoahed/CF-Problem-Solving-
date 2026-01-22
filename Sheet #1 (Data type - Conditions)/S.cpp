// Question - S

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    double a;
    cin >> a;
    if(a >= 0.00 && a <= 25.00) cout << "Interval [0,25]" << endl;
    else if(a>25.00 && a<= 50.00) cout << "Interval (25,50]" << endl;
    else if(a>50.00 && a<=75.00) cout << "Interval (50,75]" << endl;
    else if(a>75.00 && a<=100) cout << "Interval (75,100]" << endl;
    else cout << "Out of Intervals" << endl;
    return 0;
}
