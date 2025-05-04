#include<stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int prefix_sum[n];
    prefix_sum[0] = arr[0];

    for(int i = 1; i <= n; i++) {
        prefix_sum[i] = arr[i] + prefix_sum[i-1];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ",prefix_sum[i]);
    }

    
    return 0;
}