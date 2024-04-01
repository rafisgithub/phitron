#include<stdio.h>

int main(){
    int n1,n2;

    scanf("%d %d",&n1,&n2);
    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d\n",n1,n2,n1-n2);
    printf("%d * %d = %d\n",n1,n2,n1*n2);
    printf("%d / %d = %0.2f\n",n1,n2,((n1*1.0)/n2));
    // printf("%d / %d = %0.1f\n",n1,n2,((float)n1/n2));
    return 0;
}