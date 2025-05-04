#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int digit = 1;
    int space = n -1;

    for(int i=0;i<n;i++){
        for(int i=0; i< space;i++) {
            printf(" ");
        }
        for(int i=1; i<=digit;i++) {
            printf("%d",i);
        }
        printf("\n");
        digit++;
        space--;
    }
    return 0;
}