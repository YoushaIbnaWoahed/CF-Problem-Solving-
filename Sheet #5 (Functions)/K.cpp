// Question: K

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void shiftRight(int arr[], int temp[], int n, int x){
    for(int i=0; i<n; i++){
        temp[(i+x)%n] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

int main()
{
    optimize();

    int n, x;
    cin >> n >> x;

    int arr[n];
    int temp[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    shiftRight(arr, temp, n, x);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
