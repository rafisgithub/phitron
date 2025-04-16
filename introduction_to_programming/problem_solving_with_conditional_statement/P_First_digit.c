#include<stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int reverse = 0;

    while(n!=0){
        int reminder = n%10;

        reverse = reverse * 10 + reminder;

        n = n/10;
    }

    int first_digit = reverse % 10;

    if(first_digit % 2 == 0)
        printf("EVEN\n");
    else 
        printf("ODD\n");
    return 0;
}