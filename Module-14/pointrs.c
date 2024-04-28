#include<stdio.h>

int main(){
    int x = 10000;
    int *p = &x;
     printf("%d\n",x);
    printf("%p\n",p);
    *p = 30;
    printf("%d\n",x);
    return 0;
}