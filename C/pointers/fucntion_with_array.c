#include<stdio.h>

void fun(int *arr,int n) {

    *arr = 1030;
}
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i< n;i++) {
        scanf("%d",&arr[i]);
    }

   fun(arr,n);

   for(int i=0; i< n;i++) {
    printf("%d ",arr[i]);
}

    return 0;
}