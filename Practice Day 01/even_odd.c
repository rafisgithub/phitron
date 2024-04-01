#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n%2!=0){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    return 0;
}