#include<stdio.h>

int main(){
    int money;

    scanf("%d",&money);

    if(money>=10000){
        printf("I will go home\n");
        money -= 100000;
        if(money>10000){
            printf("And I will go for trip also");
        }
       
    }else{
        printf("I will working.\n");
    }
    return 0;
}