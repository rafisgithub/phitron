#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int star = n;
    int space = 0;

    for(int i = 0; i < n; i++) {
        
        for(int i = 0; i < space; i++) {
            printf(" ");
        }
        for(int i = 0; i < star; i++) {
            printf("*");
        }
        


        printf("\n");

        star--;
        space++;


    }
    return 0;
}