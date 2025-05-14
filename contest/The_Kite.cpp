#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int space = n - 1;

    for (int i=1; i<=n;i++) {

        for (int j=1; j<=space;j++) {
            cout << " ";
        }
        cout << "/";

        for (int k=1; k<=2 * (i - 1); k++) {
            cout << "-";
        }
        cout << "\\";
        cout << "\n";
        space--;
    }


    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        cout << "\\";
        for (int j = 1; j <= 2 * (i - 1); ++j) {
            cout << "-";
        }
        cout << "/";
        cout << "\n";
    }

    return 0;
}


