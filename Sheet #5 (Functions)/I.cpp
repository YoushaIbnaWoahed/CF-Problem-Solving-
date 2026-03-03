// Question: I

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

void swapRowCol(int arr[][500], int n, int x, int y){
    // Swapping row with row
    for(int j=0; j<n; j++){
        int temp = arr[x][j];
        arr[x][j] = arr[y][j];
        arr[y][j] = temp;
    }

    // Swapping column with column
    for(int i=0; i<n; i++){
        int temp = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = temp;
    }
}

int main()
{
    optimize();

    int n, x, y;
    cin >> n >> x >> y;

    x--;
    y--;
    int arr[500][500];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    swapRowCol(arr, n, x, y);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
