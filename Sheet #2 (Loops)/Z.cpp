// Question - Z

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int k, s;
    cin >> k >> s;
    int count = 0;

    for(int x=0; x<=k; x++){
        int remaining = s-x;
        if(remaining < 0) break;

        int min_y = max(0, remaining - k);
        int max_y = min(k, remaining);

        if(max_y >= min_y){
            count += (max_y - min_y + 1);
        }
    }
    cout << count << endl;
    return 0;
}
