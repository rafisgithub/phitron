#include<stdio.h>
void fun(unsigned short n){
    if(n==0) return 0;

    fun(n-1);

    printf("%d\n",n);
}
int main(){
    unsigned short n;
    scanf("%d",&n);
    fun(n);
    return 0;
}