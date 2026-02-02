// Question - H

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        bool good = false;
        for(int i=0; i+2 < s.size(); i++){
            if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
                good = true;
                break;
            }
        }
        if(good) cout << "Good\n";
        else cout << "Bad\n";
    }

    return 0;
}
