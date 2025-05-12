#include<stdio.h>

void fun(int n) {
    if(n==0){
        return;
    }
    printf("I love Recursion\n");
    n--;
    fun(n);
    
}
int main() {
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}