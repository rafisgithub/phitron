#include<stdio.h>

int main(){
    unsigned short number_of_line;
    
    scanf("%hu",&number_of_line);

    unsigned short digit = 1;
    unsigned short space = number_of_line-1;

    for(unsigned short i=1;i<=number_of_line;i++){
        for(unsigned short j=1;j<=space;j++){
            printf(" ");
        }
        for(unsigned short k=digit;k>=1;k--){
            printf("%hu",k);
        }
        printf("\n");
        space--;
        digit++;
    }
    return 0;
}