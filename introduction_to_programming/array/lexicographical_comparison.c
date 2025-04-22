#include<stdio.h>

int main() {
    char s1[100];
    char s2[100];


    scanf("%s %s",&s1,&s2);
    int i= 0;
    while (1)
    {
        if(s1[i] == '\0' && s2[i] == '\0'){
            printf("Same");
            break;
        }else if(s1[i] == '\0'){
            printf("S1 chuto");
            break;
        }else if(s2[i] == '\0') {
            printf("s2 chuto\n");
            break;
        }

        if(s1[i] == s2[i]){
           i++;
        }else if(s1[i]<s2[i]){
            printf("s1 chuto");
            break;
        }else{
            printf("s2 chuto");
            break;
        }

    }


    
    return 0;
}