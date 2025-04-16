#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);


    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for(size_t i = 0; i < n; i++) {
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]%2){
            odd++;
        }
        if(arr[i]>0){
            positive++;
        }
        if(arr[i]<0){
            negative++;
        }
    }

    printf("Even: %d",even);
    printf("\nOdd: %d",odd);
    printf("\nPositive: %d",positive);
    printf("\nNegative: %d",negative);
    return 0;
}