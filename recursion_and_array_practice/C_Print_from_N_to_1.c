#include<stdio.h>
void fun(unsigned short n){
    if(n==0) return;
    if(n==1){
         printf("%hu",n);
    }else{
    printf("%hu ",n);
    }
    fun(n-1);
}
int main(){
    unsigned short n;
    scanf("%hu",&n);
    fun(n);
    return 0;
}