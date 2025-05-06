#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int star = 1;
    int space = n -1;

    for(int i=1; i<=2*n;i++) {

        for(int i=0; i< space;i++) {
            printf(" ");
        }

        for(int i=0; i<star;i++) {
            printf("*");
        }
        
        printf("\n");
            if(n==i){
                continue;
            }else if(i<n){
                star+=2;
                space--;
            }else{
                star-=2;
                space++;
            }
           
      
    }

    return 0;
}