#include<stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    long long int r = (long long int)a*b;
    printf("%lld",r);
    return 0;
}