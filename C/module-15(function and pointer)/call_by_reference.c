#include<stdio.h>
void fun(int *p){
    printf("value of p : %p\n",p);
   
    *p=300;
}
int main(){
    int x = 100;
    fun(&x);

    printf("address of x : %p\n",&x);

     printf("value of x : %d\n",x);

    return 0;
}