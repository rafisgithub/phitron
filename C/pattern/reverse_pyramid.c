#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int star = 2*n - 1;
    int space = 0;

    for(int i = 0; i < n; i++) {

        for(int i = 0; i <space ; i++) {
            printf(" ");
        }
        for(int i = 0; i < star; i++) {
            printf("*");
        }

        printf("\n");

        space++;
        star-=2;
    }
    return 0;
}