#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];

    scanf("%s",s);
    int ctn[26] = {0};

    for(int i=0;i<strlen(s);i++){
        ctn[s[i]-97]++;
    }

    for(int i = 0; i < 26; i++) {
        if(ctn[i]!=0)
        printf("%c - %d\n",i+97,ctn[i]);

    }

    return 0;
}