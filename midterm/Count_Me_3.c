#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--) {
        char s[10001];
        scanf("%s",s);

        int s_len = strlen(s);
        int count_cap = 0;
        int count_small = 0;
        int count_digit = 0;

        for(int i=0;i<s_len;i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                count_small++;
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                count_cap++;
            }else{
                count_digit++;
            }
        }

        printf("%d %d %d\n",count_cap,count_small,count_digit);
    }
    return 0;
}
