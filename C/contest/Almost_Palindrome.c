#include<stdio.h>
#include<string.h>

int main() {

    int t;
    scanf("%d",&t);

    while(t--) {
        char s[1001];

        scanf("%s",s);

        int s_len = strlen(s);

        int freq[26] = {0};

        for(int i = 0; i < s_len; i++) {
            freq[s[i]-'a']++;
        }

        int odd_char_counter = 0;

        for(int i = 0; i < 26; i++) {
            if(freq[i]%2!=0){
                odd_char_counter++;
            }
        }

        if(odd_char_counter <= 1){
            printf("0\n");
        }else{
            printf("%d\n",odd_char_counter - 1);
        }

    }

    return 0;
}