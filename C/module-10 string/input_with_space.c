#include<stdio.h>
#include<string.h>
int main(){
    char arr[1];
    // gets(arr);
    fgets(arr,11,stdin);
    printf("%s",arr);
    return 0;
}