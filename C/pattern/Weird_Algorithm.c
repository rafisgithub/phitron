#include<stdio.h>

int main() {
    long long int n;
    scanf("%lld",&n);

    while(n!=0){
        printf("%lld ",n);
        if(n==1) break;
        if(n%2==0){
           n = n/2;
        }else{
            n = (n*3) + 1;
        }
    }
    return 0;
}