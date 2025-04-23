#include<stdio.h>
#include<stdbool.h>

int main() {
    char s[1001];
    scanf("%s",&s);

    int i=0;
    int j=strlen(s)-1;

    bool flag = true;

    while(i<j) {

        if(s[i]!=s[j]){
            flag = false;
        }
        i++;
        j--;
    }

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}