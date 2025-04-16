#include<stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);

    if(n%3==0) 
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}