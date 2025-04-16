#include<stdio.h>

int main() {
    long long int n;

    scanf("%lld",&n);

    if(n<=1000){
        printf("Bad luck!\n");
    }else{
        printf("I will buy Punjabi\n");
        int rm = n - 1000;
        if(rm >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    return 0;
}