// Question - N

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    char ch;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        ch = ch -32;
    }
    else if(ch >= 'A' && ch <= 'z'){
        ch = ch + 32;
    }
    cout << ch << endl;
    return 0;
}
