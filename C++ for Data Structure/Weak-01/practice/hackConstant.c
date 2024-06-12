#include<stdio.h>


int main(){
    const int x = 20;

 printf("%d\n",x);

    int *a = &x;
    *a = 0;
    printf("%d\n",x);
    
    return 0;
}