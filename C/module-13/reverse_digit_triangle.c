#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int digit = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=digit;j++){
            printf("%d ",j);
        }
        printf("\n");
        digit--;
    }
    return 0;
}