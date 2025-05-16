#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }



    int newarr[n];

    for(int i = 0; i < n; i++) {
        newarr[i]  = 0;
    }


    int j  = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0){
            newarr[j] = arr[i];
            j++;
        }
        
    }

    for(int i = 0; i < n; i++) {
        printf("%d ",newarr[i]);
    }


    return 0;
}