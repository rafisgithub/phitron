#include<stdio.h>

int main(){
    unsigned short n;
    scanf("%hu",&n);

    unsigned short c = 1;
    unsigned short space = n-1;

    for(unsigned short i=1;i<=(n*2)-1;i++){

        for(unsigned short k=1;k<=space;k++){
            printf(" ");
        }
        for(unsigned short j=1;j<=c;j++){
            if(i%2==0){
                printf("-");
            }else{
                printf("#");
            }
        }
        if(i<n){
                space--;
                c+=2;
            }else{
                space++;
                c-=2;
            }
        printf("\n");
    }
    return 0;
}