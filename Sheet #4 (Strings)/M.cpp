// Question - M

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for(char c:s){
        if(c == target[j]){
            j++;
            if(j == target.size()) break;
        }
    }
    if(j == target.size()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
