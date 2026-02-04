// Question - G

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    string s;
    getline(cin, s);
    for(char &c : s){
        if(c == ',') c = ' ';
        else if(isupper(c)) c = tolower(c);
        else if(islower(c)) c = toupper(c);
    }
    cout << s << endl;

    return 0;
}
