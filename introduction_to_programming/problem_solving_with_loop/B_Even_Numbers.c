#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(size_t i = 2; i <= n; i+=2) {
        printf("%d\n",i);
    }
    return 0;
}