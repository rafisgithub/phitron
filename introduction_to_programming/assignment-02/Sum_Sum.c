#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int sumOfPosN = 0;
    int sumOfNeg = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i]>0){
            sumOfPosN+=arr[i];
        }else{
            sumOfNeg+=arr[i];
        }
    }

    printf("%d %d\n",sumOfPosN,sumOfNeg);
    return 0;
}