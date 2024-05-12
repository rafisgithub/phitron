#include<stdio.h>
int fun(int i){
    if(i==0) return;
    printf("%d\n",i);
    fun(i-1);
}
int main(){
    fun(5);
    return 0;
}