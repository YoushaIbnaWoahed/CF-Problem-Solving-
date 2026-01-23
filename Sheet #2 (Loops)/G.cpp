// Question - G

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        long long fact=1;
        for(int i=1; i<=a; i++){
            fact =fact*i;
        }
        cout << fact << endl;
    }
    return 0;
}
