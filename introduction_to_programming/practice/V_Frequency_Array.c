#include<stdio.h>

int main() {

    int n,m;

    scanf("%d %d",&n,&m);

    int arr[n];

    for(int i=0; i< n;i++) {
        scanf("%d",&arr[i]);
    }

    int frequency_arry[m+1];

    for(int i=0;i<=m;i++){
        frequency_arry[i] = 0;
    }

    for(int i=0;i<n;i++){
        frequency_arry[arr[i]]++;
    }

    for(int i = 1;i<=m;i++){
        printf("%d\n",frequency_arry[i]);
    }
    return 0;
}