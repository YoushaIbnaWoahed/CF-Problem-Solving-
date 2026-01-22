// Question - W

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {
    optimize();
    string input;
    getline(cin, input);

    int A, B, C;
    char S, Q;
    stringstream ss(input);
    ss >> A >> S >> B >> Q >> C;
    int result;
    if (S == '+') {
        result = A + B;
    }
    else if (S == '-') {
        result = A - B;
    }
    else if (S == '*') {
        result = A * B;
    }
    else {
        cout << "Invalid operation" << endl;
        return 1;
    }
    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
