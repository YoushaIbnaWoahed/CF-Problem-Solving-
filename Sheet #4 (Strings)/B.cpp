// Question - B

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s;
    getline(cin, s);
    size_t pos = s.find('\\');
    if(pos != string::npos){
        cout << s.substr(0, pos) << endl;
    }
    return 0;
}
