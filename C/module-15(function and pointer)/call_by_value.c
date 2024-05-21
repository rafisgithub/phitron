#include<stdio.h>
void fun(int x){
printf("fun function x address : %p\n ",&x);
x = 300;
}
int main(){
    int x = 10;
    printf("main function x address : %p\n ",&x);
    fun(x);
    printf("%d\n",x);
    return 0;
}