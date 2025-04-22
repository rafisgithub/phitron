#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int countArr[6] = {0};

    for(int i = 0; i < n; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d \n",i,countArr[i]);
    }
    

    return 0;
}