#include<stdio.h>
#include<string.h>

int main() {

    char s1[21];
    char s2[21];

    scanf("%s %s",s1,s2);

    int r = strcmp(s1,s2);

    if(r==0){
        printf("%s\n",s1);
    }else if(r<0){
        printf("%s\n",s1);
    }else if(r>0){
        printf("%s\n",s2);
    }
    return 0;
}