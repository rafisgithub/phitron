#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int star = 1;
    int space = n-1;
    

    for(int i=0; i<2*n-1; i++) {

        for(int j=0; j<space;j++) {
            cout <<" ";
        }

        for(int k=0; k<star;k++) {
            cout << "*";
        }

        if(i<n-1){
            star+=2;
            space--;
        }else {
            star-=2;
            space++;
        }
        




        cout << endl;

        
    }
    return 0;
}