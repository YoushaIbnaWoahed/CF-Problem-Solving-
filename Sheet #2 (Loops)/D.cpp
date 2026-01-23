// Question - D

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s = "1999";
    string s2;
    while(true){
    cin >> s2;
    if(s2 == s){
        cout << "Correct" << endl;
        break;
    }
    else cout << "Wrong" << endl;
    }
    return 0;
}
