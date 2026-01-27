// Question - D

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void printDigits(int num) {
    if(num < 10){
        cout << num << " ";
        return;
    }
    printDigits(num/10);
    cout << (num%10) << " ";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        printDigits(n);
        cout << endl;
    }

    return 0;
}
