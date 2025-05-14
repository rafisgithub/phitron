#include<stdio.h>

void test() {

    printf("Hello world\n");

    test();


   
}
int main() {
   
    test();
    return 0;
}