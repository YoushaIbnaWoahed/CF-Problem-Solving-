// Question - B

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

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // Center position
            if(i == n/2 && j == n/2) {
                cout << 'X';
            }
            // Main diagonal
            else if(i == j) {
                cout << '\\';
            }
            // Anti-diagonal3
            else if(i + j == n - 1) {
                cout << '/';
            }
            // Everything else
            else {
                cout << '*';
            }
        }
        cout << endl;
    }

    return 0;
}
