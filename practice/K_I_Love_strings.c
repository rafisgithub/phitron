#include<stdio.h>
#include<string.h>


int main() {
    int t;
    scanf("%d",&t);

    while (t--)
    {
        char s[51];
        char t[51];

        scanf("%s",s);
        scanf("%s",t);

        int len_s = strlen(s);
        int len_t = strlen(t);

        char ms[sl+tl+1];

        int max_len = (len_s > len_t) ? len_s : len_t;

        for(int i = 0; i < max_len; i++) {
            if(i<sl){
                printf("%c",s[i]);
            }
            if(i<tl){
                printf("%c",t[i]);
            }
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}