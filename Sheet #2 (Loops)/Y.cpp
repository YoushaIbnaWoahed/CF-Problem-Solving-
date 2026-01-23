// Question - Y

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int first=0, second=1, count=0, fibo, n;
    cin >> n;
    while(count < n){
        if(count <= 1){
            fibo = count;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout << fibo << " ";
        count++;
    }
    cout << endl;
    return 0;
}
