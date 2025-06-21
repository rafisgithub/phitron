#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n;i++) {
       arr.push_back(arr[i]);
    }

    int counter = 0;
    for(int i=0; i<n;i++) {
        bool flag = false;
    
        for(int j=0; j<n;j++) {
            
        int val = arr[i] + 1;

            if(val == arr[j]){
                flag = true;
                break;
            }
        }

        if(flag){
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}