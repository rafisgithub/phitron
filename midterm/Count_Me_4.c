#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    char s[10001];

    scanf("%s",s);

    int count_char[26] = {0};

    for(int i=0;s[i] != '\0';i++){

        count_char[s[i]-'a']++;
    }

    for(int i=0;i<26;i++) {
        if(count_char[i] != 0) {
            printf("%c - %d\n",i+'a',count_char[i]);
        }
    }
       
    return 0;
}
