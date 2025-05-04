#include<stdio.h>
#include<string.h>


int main() {
    
    int t;
    scanf("%d",&t);

    while(t--) {

        char s[51];
        char t[51];

        scanf("%s %s",s,t);

        int sl = strlen(s);
        int tl = strlen(t);

        char ms[sl+tl+1];
        ms[sl+tl] = '\0';
      
        if(sl>tl){
            for(int i=0;i<sl;i++){
               if(i<sl){
                printf("%c",s[i]);
               }
               if(i<tl){
                printf("%c",t[i]);
               }
            }
        }else{
            for(int i=0;i<tl;i++){
                if(i<sl){
                    printf("%c",s[i]);
                   }
                   if(i<tl){
                    printf("%c",t[i]);
                   }
            }
        }
        printf("\n");

    }
    return 0;
}