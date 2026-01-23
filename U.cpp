// Question - U

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (a <= sumOfDigits(i) && sumOfDigits(i) <= b) {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}
