#include<stdio.h>
#include<string.h>
int main(){
    char s[10010];
    scanf("%s",s);


    int i=0;
    int j = strlen(s)-1;
    int flag = 1;
    // printf("%d",j);
    while(i<j){
       if(s[i]!=s[j]){
        flag = 0;
        break;
       }
       i++;
       j--;
    }

    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}