#include<stdio.h>

int main(){
    int x = 100;
    int * ptr = &x;
    printf("Address of x : %p\n",ptr);
    printf("Value of x : %d\n",*ptr);
    printf("Value of ptr : %p\n",ptr);

    printf("Address  of ptr : %p\n",&ptr);
    
    printf("Size  of ptr : %d\n",sizeof(ptr));


    // int x = 100;
    // int * ptr = &x; 

    // x = 200;
    // *ptr = 300;
    // printf("x er value-%d\n",x);
    // printf("x er value-%d\n",*ptr);
    return 0;
}