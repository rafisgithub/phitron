#include<stdio.h>
#include<limits.h>

void find_max_min(int *arr,int n) {
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0; i< n;i++) {
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d %d\n",min,max);
}
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i< n;i++) {
        scanf("%d",&arr[i]);
    }

    find_max_min(arr,n);
    return 0;
}