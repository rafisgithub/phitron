#include<stdio.h>

int main() {
    int x;

    scanf("%d",&x);
    printf("%d\n",x);

    int* ptr = &x;

    printf("%p\n",ptr);

    *ptr = 200;
    
    printf("%d\n",x);

    return 0;
} 