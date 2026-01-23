// Question - S

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int sumofOdds(int x, int y){
    int start = min(x,y);
    int end = max(x, y);
    int oddsSum = 0;

    for(int num = start + 1; num < end; num++){
        if(num % 2 != 0){
            oddsSum += num;
        }
    }
    return oddsSum;
}

int main()
{
    int t;
    cin >> t;
    vector<int>results;

    while(t--){
        int x, y;
        cin >> x >> y;
        int result = sumofOdds(x, y);
        results.push_back(result);
    }
    for(int u:results){
        cout << u << endl;
    }
    return 0;
}
