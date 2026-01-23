// Question - Q

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x == 0){
            cout << "0" << endl;
            continue;
        }

        bool first = true;
        while(x>0){
            int digit = x%10;
            if(!first){
                cout << " ";
            }
            cout << digit;
            first = false;
            x = x/10;
        }
        cout << endl;
    }
    return 0;
}
