#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    char arr[n];

    for(int i = 0;i<n;i++) {
        scanf("%c",&arr[i]);
    }

    for(int i=0;i<n;i++) {
        printf("%c",arr[i]);
    }
    printf("\n");

    int i=0;
    int j=n-1;

    while(i<j) {
        char temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
       
        i++;
        j--;

    }

    for(int i=0;i<n;i++) {
        printf("%c",arr[i]);
    }
    printf("\n");


    return 0;
}