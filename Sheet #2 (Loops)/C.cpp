// Question - C

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int even=0, odd=0, positive=0, negative=0;
    for(int u:v){
        if(u%2==0) even++;
        else odd++;
        if(u>0) positive++;
        else if(u<0) negative++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}
