#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;



        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        int odd = 0,even = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

                      
        if(n%2 != 0){
            cout << "-1" <<endl;
            continue;

        }



        if(odd > even){
            cout << (odd - even)/2 <<endl;
        }else if(even > odd){
            cout << (even - odd) / 2 <<endl;
        }else if(even == odd){
            cout << "0" <<endl;
        }

  
    }

    return 0;
}