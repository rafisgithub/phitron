#include<stdio.h>
#include<string.h>

void fun(char arr[]){
    
    int len = sizeof(arr)/sizeof(char);
    printf("%d\n",len);

    // printf("%d\n",strlen(arr));
}
int main(){
    char ar[20] = "Hello";

    int len = sizeof(&ar[0])/sizeof(char);
    printf("%d\n",len);
    fun(ar);
    return 0;
}