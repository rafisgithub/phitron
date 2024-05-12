#include<stdio.h>
void fun(unsigned short n){
    if(n==0){
        return;
    }
    printf("I love Recursion\n");
    fun(n-1);
}
int main(){
    unsigned short n;
    scanf("%hu",&n);
    fun(n);
    return 0;
}