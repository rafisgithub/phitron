#include<stdio.h>

int main(){
   unsigned int a,b;
    scanf("%u %u",&a,&b);

    if(b==0){
        printf("-1");
    }else{
        printf("%u",a%b);
    }
    return 0;
}