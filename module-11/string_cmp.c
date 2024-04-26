#include<stdio.h>

int main(){
        char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int val = strcmp(a,b);
    // printf("%d",val);
    if(val>0){
        printf("a is geater\n");
    }else if(val<0){
        printf("b is greater\n");
    }else{
        printf("Equal");
    }

    return 0;
}