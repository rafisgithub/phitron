#include<stdio.h>
#include<limits.h>


int find_max(int* arr,int n,int i){
    
    if(i == n){
        return INT_MIN;
    }

    int val = find_max(arr,n,i+1);

    if(val < arr[i]){
        return arr[i];
    }else{
        return val;
    }
}
int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

   int r = find_max(arr,n,0);

    printf("%d",r);
    return 0;
}