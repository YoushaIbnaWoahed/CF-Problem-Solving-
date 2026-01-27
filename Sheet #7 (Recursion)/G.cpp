// Question - G

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void isPyramid (char ch, int count){
    if(count == 0) return;
    cout << ch;
    isPyramid(ch, count - 1);
}

void printPyramid(int n, int currentLine = 1){
    if(currentLine > n) return;
    isPyramid(' ', n - currentLine);
    isPyramid('*', 2*currentLine-1);
    cout << endl;
    printPyramid(n, currentLine+1);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n);
    return 0;
}
