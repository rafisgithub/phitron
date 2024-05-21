#include<stdio.h>

int fun(char s[], int i) {
    if (s[i] == '\0') 
        return 0;
    int len = fun(s, i + 1);
    return len + 1;
}

int main() {
    char s[10020];
    scanf("%s", s);

    int len = fun(s, 0);
    printf("%d", len);
    return 0;
}
