#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    char next_c = c+1;
    if(next_c>'z'){
        next_c = 'a';
    }   
    printf("%c\n",next_c);
    return 0;
}