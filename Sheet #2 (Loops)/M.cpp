// Question - M

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int islucky(int num){
    while(num > 0){
        int digit = num%10;
        if(digit != 4 && digit != 7){
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    vector<int> luckynum;
    for(int i=n; i<=m; i++){
        if(islucky(i)){
            luckynum.push_back(i);
        }
    }
    if(luckynum.empty()){
        cout << -1 << endl;
    }
    else{
        for(int num:luckynum){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
