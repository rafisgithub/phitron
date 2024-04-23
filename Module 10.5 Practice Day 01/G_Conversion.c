#include<stdio.h>
#include<string.h>
int main(){
    char s[1000020];
    fgets(s,sizeof(s)/sizeof(char),stdin);

    for(int i =0;i<strlen(s);i++){
        if(s[i] == ','){
            s[i] = ' ';
        }
        if(s[i]>='a' && s[i]<='z'){
            s[i] -= 'a'-'A';
        }else if(s[i]>='A' && s[i]<='Z'){
            s[i] += 'a'-'A';
        }
    }
    printf("%s",s);
    return 0;
}