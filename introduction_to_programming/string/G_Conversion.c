#include<stdio.h>

int main() {
    char s[1000001];
    scanf("%s",s);

    int len = 0;

    for(int i=0; s[i] != '\0'; i++) {
        len++;
    }
   
    for(int i=0;i<19;i++){
       if(s[i] >= 'a' && s[i] <= 'z'){
            s[i]-=32;
       }else if(s[i] >= 'A' && s[i] <= 'Z'){
        s[i]+=32;
       }else if(s[i]==','){
        s[i]=32;
       }
    }

    for(int i=0;i<len;i++){
        printf("%c",s[i]);
    }
    return 0;
}