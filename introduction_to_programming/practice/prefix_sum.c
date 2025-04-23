#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    int sum  = 0;
   
    int newArr[n];

    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        newArr[i] = sum;
        printf("%d ",newArr[i]);
    }




 
    return 0;
}