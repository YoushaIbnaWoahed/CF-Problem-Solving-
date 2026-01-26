// Question - H

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

pair<int, int> findxy(int n){
    for(int x=0; x<n; x++){
        int x2_mod = (x*x)%n;
        int y2_mod = (n - x2_mod)%n;

        int y = sqrt(y2_mod);
        if(y*y == y2_mod){
            return {x, y};
        }
    }
    return {-1, -1};
}

int main()
{
    optimize();

    int n;
    cin >> n;
    pair<int, int> result = findxy(n);
    if(result.first != -1){
        cout << result.first << " " << result.second << endl;
    }
    else cout << "No solutions" << endl;
    return 0;
}
