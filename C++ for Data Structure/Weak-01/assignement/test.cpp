#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%2!=0){
        for (int i = 0; i < n; i++) {

                for (int j = 0; j < n; j++) {

                    if (i == j && i == n / 2){
                        cout << "X";
                    }else if (i == j){
                        cout << "\\";
                    }else if (i + j == n - 1){
                        cout << "/";
                    }else{

                        cout << " ";
                    }
                }
                cout<<endl;
            }
    }else{
        cout<<"Eta to sundor hobe na!ei jonno pattern ti banano hoini.apni boron odd number diye try korun\n";
    }

    
    return 0;
}
