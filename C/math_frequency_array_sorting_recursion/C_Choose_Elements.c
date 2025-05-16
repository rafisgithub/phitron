#include<stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int newarr[n];
    for(int i = 0; i < n; i++) {
        newarr[i] = 0;
    }

    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i]>=0){
            newarr[j] = arr[i];
            j++;
        }
    }


    long long int sum = 0;

    for(int i = 0; i < k; i++) {
        sum += newarr[i];
    }

    printf("%lld\n",sum);

    
    return 0;
}