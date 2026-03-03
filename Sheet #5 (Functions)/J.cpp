// Question: J

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

double getAvg(double arr[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main()
{
    optimize();

    int n;
    cin >> n;

    double arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    double avg = getAvg(arr, n);
    cout << fixed << setprecision(7) << avg << endl;

    return 0;
}
