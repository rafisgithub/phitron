#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100001];

    scanf("%s",s);

    int s_len = strlen(s);

    int count_consonent = 0;

    for(int i=0;i<s_len;i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            count_consonent++;
        }

    }
    printf("%d\n",count_consonent);
    return 0;
}
