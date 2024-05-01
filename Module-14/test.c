#include<stdio.h>
void fun(int *x){
    *x = 1000;
}
int main(){
    int x = 10;

    fun(&x);

    printf("%d",x);

    return 0;
}