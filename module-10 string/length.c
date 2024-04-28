#include<stdio.h>

int main(){
    char arr[100];
    scanf("%s",arr);
    int count = 0;
    int i = 0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}