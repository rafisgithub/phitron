#include<stdio.h>

int main(){
    char s[1000000];
    scanf("%s",s);

    int strlen = 0;
    int i =0;
    while(s[i]!='\0'){
        strlen++;
        i++;
    }
    printf("%d",strlen);
    return 0;
}