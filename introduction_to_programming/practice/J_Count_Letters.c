#include<stdio.h>
#include<string.h>

char s[10000001];

int main() {
    
    scanf("%s",s);

    int counter[26] = {0};

    for(int i=0;i<strlen(s);i++) {
        counter[s[i]-97]++;
    }

    for(int i =0;i<26;i++){
        if(counter[i]!=0)
            printf("%c : %d\n",i+97,counter[i]);
    }
    return 0;
}