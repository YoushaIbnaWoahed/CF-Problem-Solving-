// Question - U

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    double N;
    cin >> N;
    if (N == int(N)) {
        cout << "int " << int(N) << endl;
    } else {
        int intPart = int(N);
        double fracPart = N - intPart;
        cout << "float " << intPart << " " << setprecision(10) << fracPart << endl;
    }
    return 0;
}
