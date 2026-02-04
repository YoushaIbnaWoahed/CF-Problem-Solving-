// Question - J

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

    int freq[26] = {0};

    for(auto c:s){
        freq[c - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            cout << char('a' + i) << " : " << freq[i] << endl;

        }
    }

    return 0;
}
