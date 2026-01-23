// Question - J

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        bool is_prime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
