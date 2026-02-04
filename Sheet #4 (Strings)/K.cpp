// Question - k

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();

    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;

        string result = "";
        int lena = a.size();
        int lenb = b.size();
        int minlen = min(lena, lenb);

        for(int i=0; i<minlen; i++){
            result += a[i];
            result += b[i];
        }

        if(lena > minlen) result += a.substr(minlen);
        if(lenb > minlen) result += b.substr(minlen);

        cout << result << endl;
    }

    return 0;
}
