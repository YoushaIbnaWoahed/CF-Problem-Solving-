// Question - F

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    unsigned int A, B;

    cin >> A >> B;
    unsigned int result = A ^ B;
    cout << result << endl;

    return 0;
}
