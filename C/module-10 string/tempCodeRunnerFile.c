#include<stdio.h>

int main(){
    char s[3] = "123";

    // scanf("%s",s);

    for(int i=0;s[i]!='\0';i++){
        printf("%s",s[i]);
    }

    return 0;
}