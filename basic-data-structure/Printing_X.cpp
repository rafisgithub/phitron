#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int backslash = 1;
    int forwaredslash = 1;

    int space = 0;

    for(int i = 0; i < n; i++) {
        for(int i = 0; i < space; i++) {
            printf(" ");
        }

        printf("//");

        for(int i = 0; i < n; i++) {
            
        }
        
    }

    return 0;
}
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