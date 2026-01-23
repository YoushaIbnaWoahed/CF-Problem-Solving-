// Question - I

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int t, temp, r, s=0;
    cin >> t;
    temp = t;
    while(temp!=0){
        r = temp%10;
        s = s*10+r;
        temp = temp/10;
    }
    if(t == s) cout << s << "\n" << "YES" << endl;
    else cout << s << "\n" << "NO" << endl;
    return 0;
}
