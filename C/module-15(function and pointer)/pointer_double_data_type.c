#include<stdio.h>

int main(){
    double x = 5.26;

    double *ptr = &x;
    *ptr = 10.20;
    double *ptr2 = ptr;
    *ptr2 = 100.23;
    printf("value of x = %.2lf\n",x);
    printf("value of x = %.2lf\n",*ptr);
    printf("Size of Ptr = %d\n",sizeof(ptr));
    printf("Size of x = %d\n",sizeof(x));

    return 0;
}