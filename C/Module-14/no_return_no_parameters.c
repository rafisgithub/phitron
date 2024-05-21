#include<stdio.h>
void sum(){
    int a,b;
    scanf("%d %d",&a,&b);

    int sum = a+b;

    printf("%d",sum);
}
int main(){
    sum();
    return 0;
}