#include<stdio.h>

int main() {


    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);

    int s1_len = 0;
    int s2_len = 0;

    for(int i= 0;s1[i]!='\0';i++){
        s1_len++;
    }
 
    for(int i=0;s2[i]!='\0';i++){
        s2_len++;
    }

    char s[s1_len + s2_len];

    for(int i=0;i < s1_len;i++){
        s[i] = s1[i];
    }

    for(int i = 0;i < s2_len;i++){
        s[i+s1_len] = s2[i];
    }
    
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    printf("%d %d\n",s1_len,s2_len);
    printf("%s\n",s);

    printf("%s %s \n",s1,s2);


    return 0;
}