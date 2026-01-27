// Question - I

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void countVowel(string s){
    int cnt = 0;
    for(char v:s){
        if(v=='a' || v=='A' || v=='e' || v=='E' || v=='i' || v=='I' || v=='o' || v=='O' || v=='u' || v=='U'){
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main() {
    string s;
    getline(cin, s);

    countVowel(s);

    return 0;
}
