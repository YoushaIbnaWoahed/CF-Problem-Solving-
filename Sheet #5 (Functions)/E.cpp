// Question - E

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

//int swapping(int &x, int &y){ // & to Use references to modify original variables
//    int temp=0;
//    temp = x;
//    x = y;
//    y = temp;
//    return x, y;
//}

pair<int, int> swapping(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return {x, y};
}

int main() {
    int x, y;
    cin >> x >> y;

//    swapping(x, y);
//    cout << x << " " <<  y << endl;

    pair<int, int> result = swapping(x, y);
    cout << result.first << " " << result.second << endl;

    return 0;
}
