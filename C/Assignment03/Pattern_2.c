#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int space = n -1;

    int digits = 1;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < space; j++) {
            printf(" ");
        }
        

        for(int k = digits; k > 0; k--) {
            printf("%d",k);
        }

        printf("\n");
        digits++;
        space--;
    }

    return 0;
}