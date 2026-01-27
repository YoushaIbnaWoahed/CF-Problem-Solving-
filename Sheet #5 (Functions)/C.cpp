// Question - C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

bool odd(int n){
    return n%2 != 0;
}

bool isPalindrome(string s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

void wonderful(int n){
    if( !odd(n) ){
        cout << "NO" << endl;
        return;
    }
    string binary = "";
    int temp = n;
    while(temp > 0){
        binary += char((temp%2) + '0');
        temp /= 2;
    }
    if(isPalindrome(binary)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();

    int n;
    cin >> n;
    wonderful(n);

    return 0;
}
