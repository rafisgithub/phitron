#include<stdio.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    char s[101];    
    while(t--) {
        scanf("%s",s);

        int len = strlen(s);
        int counter = 0;
        for(int i=0;i<len;i++) {
            counter++;
            
                
        }

        if(counter>=10){
            printf("%c%d%c\n",s[0],counter-2,s[len-1]);
        }else{
            printf("%s\n",s);
        }

    }
    return 0;
}