#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n-1];

    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    long long int sum = 0;

    for(int i=0; i < n-1;i++) {
        sum += arr[i];
    }
   
  

    long long int actualSum = 0;

    for(int i=1; i<=n;i++) {
        actualSum += i;
    }
    printf("%d\n",actualSum-sum);


  
    return 0;
}