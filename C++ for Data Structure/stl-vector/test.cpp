#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;

    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           arr[i][j] = 0; 
        }
    }

    int counter = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
         counter++;
          arr[i][j] = counter;
          
        }
        cout << "\n";
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

}
