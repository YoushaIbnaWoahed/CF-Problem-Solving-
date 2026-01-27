// Question - C

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

long long sumOfFirstN(long long n){
    return n*(n+1)/2;
}

long long sumOfEven(long long a, long long b){
    if(a%2 != 0){
        a++;
    }
    if(b%2!=0){
        b--;
    }
    long long n = (b-a)/2+1;
    return n*(a+b)/2;
}

long long sumOfOdd(long long a, long long b){
    if(a%2 == 0){
        a++;
    }
    if(b%2==0){
        b--;
    }
    long long n = (b-a)/2+1;
    return n*(a+b)/2;
}

int main()
{
    optimize();

    long long a, b;
    cin >> a >> b;
    if(a>b){
        swap(a, b);
    }

    long long totalsum = sumOfFirstN(b) - sumOfFirstN(a - 1);
    long long evensum = sumOfEven(a, b);
    long long oddsum = sumOfOdd(a, b);

    cout << totalsum << endl;
    cout << evensum << endl;
    cout << oddsum << endl;

    return 0;
}
