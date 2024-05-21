//Take a positive integer N as input and print the pattern shown in the sample input output.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space = n-1;
    int star = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
        space--;
        star++;
    }

    return 0;
}