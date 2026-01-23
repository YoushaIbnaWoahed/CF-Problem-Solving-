// Question - A

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    double x, p;
    cin >> x >> p;
    double preprice = p / (1 - (x / 100.0));
    cout << fixed << setprecision(2) << preprice << endl;
    return 0;
}
