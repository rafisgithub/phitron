#include<stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};

    printf("0th index of address : %p\n",&arr[0]);
    printf("0th index of address : %p\n",arr);
    printf("0th index of value : %d\n",arr[0]);
    printf("0th index of value : %d\n",*arr);

    printf("1th index of value : %d\n",arr[1]);
    printf("1th index of value : %d\n",*(arr+1));

    printf("2th index of value : %d\n",*(2+arr));
    printf("2th index of value : %d\n",2[arr]);
    return 0;
}   