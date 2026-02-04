// Question - F

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
        if(s.size() > 10){
            cout << s.front() << s.size()-2 << s.back() << endl;
        }
        else cout << s << endl;
    }

    return 0;
}
