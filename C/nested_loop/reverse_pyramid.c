#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int star = 2*n-1;
    int space = 0;
    for(int i=0;i<n; i++) {
        
        for(int k = 0; k<space;k++){
            printf(" ");
        }
        
        for(int j = 0; j<star; j++) {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}