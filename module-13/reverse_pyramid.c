#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star = n*2-1;
    int space = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
    }
    return 0;
}