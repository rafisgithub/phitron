#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;


    int line = n;

    int space = 0 ;

    int mid = n /2 ;

   for(int i=0; i<line;i++) {
    for(int j=0; j<n;j++) {
        if(i==j){
            if(mid == i && mid ==j){
                cout <<"X";
            }else{
                cout << "\\";
            }
        }else if(i+j == n -1){
            cout << "/";
        }else{
            cout <<" ";
        }
    }
    cout << endl;
   }

    return 0;
}