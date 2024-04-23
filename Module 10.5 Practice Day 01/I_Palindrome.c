#include<stdio.h>
#include<string.h>
int main(){
    char s[1011];
    scanf("%s",&s);
    int len = strlen(s);
    // printf("%d",len);
    char original_string[len+1];
    strcpy(original_string,s);
    char i = 0;
    char j = len-1;

    while(i<j){
        // printf("%c %c",i,j);break;
        char temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    if(strcmp(original_string,s)==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}