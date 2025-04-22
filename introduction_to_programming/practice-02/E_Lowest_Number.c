#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min = 1000000000;
    int pos;
    for(int i=0;i<n;i++){
       if(min>arr[i]){
        min = arr[i];
        pos = i;
       }
    }

    printf("%d %d\n",min,pos+1);
    return 0;
}