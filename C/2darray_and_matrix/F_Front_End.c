#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i< n;i++) {
        scanf("%d",&arr[i]);
    }

    int i = 0;
    int j = n-1;
    while(i<=j) {

        if(i==j){
            printf("%d ",arr[i]);
            break;

        }
        printf("%d ",arr[i]);
        printf("%d ",arr[j]);
        i++;
        j--;
    }
    return 0;
}