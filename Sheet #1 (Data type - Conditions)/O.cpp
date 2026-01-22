// Question - O

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;
    if(s == '+') cout << a+b << endl;
    else if(s == '-') cout << a-b << endl;
    else if(s == '*') cout << a*b << endl;
    else if(s == '/') cout << a/b << endl;
    return 0;
}

