#include<stdio.h>
#include<string.h>

int is_palindrome(char *s, int n) {
    int i=0;
    int j = n -1;
    int flag = 1;

    while(i<j){
        if(s[i]!=s[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    return flag;
}
int main() {
    char s[1001];

    scanf("%s",s);

    // is_palindrome(s,strlen(s));


    if(is_palindrome(s,strlen(s)))

        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}