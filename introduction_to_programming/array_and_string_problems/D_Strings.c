#include<stdio.h>

int main() {
    char s1[11];
    char s2[11];

    scanf("%s %s",&s1,&s2);

    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    char s[s1_len + s2_len];

    for(int i = 0; i < s1_len; i++) {
        s[i] = s1[i];
    }
    for(int i=0;i< s2_len;i++) {
        s[i+s1_len] = s2[i]; 
    }

    printf("%d %d\n",s1_len,s2_len);
    printf("%s\n",s);

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%s %s\n",s1,s2);

    return 0;
}