#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    int star = n - 1;

    int space = 0;

    for(int i = 0; i < n; i++) {
            for(int i = 0; i < space; i++) {
            printf(" ");
        }
        for(int i = 0; i < star; i++) {
            printf("* ");
        }

        star--;
        space++;
        printf("\n");

    
    }



    return 0;
}