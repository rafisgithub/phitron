#include <stdio.h>
#include <ctype.h>

int main() {
    char a[100];
    scanf("%99s", a);
    for (int i = 0; a[i] != '\0'; i++) { 
        char ch = a[i];
        if (ch == ',') {
            a[i] = ' ';
        } else {
            a[i] = isupper(ch) ? tolower(ch) : toupper(ch);
        }
    }
    printf("%s\n", a);
    return 0;
}