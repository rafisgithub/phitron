#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i <= n; i++) {
        scanf("%d",&arr[i]);
    }

    int min = 100000000;
    int max = -10000000;

    int min_idx;
    int max_idx;

    for(int i=0;i<n;i++) {
        if(arr[i]<min){
            min = arr[i];
            min_idx = i;
        }

        if(arr[i]>max){
            max = arr[i];
            max_idx = i;
        }
    }
    // printf("%d %d\n",min,max);

    arr[min_idx] = max;
    arr[max_idx] = min;

    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }


    
    return 0;
}