#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;

    for(int i=1;i<=n*2;i++){

        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=star;k++){
            printf("*");
        }
        printf("\n");
       
      if(i==4){
        continue;
      }else{
         if(i<n){
         star+=2;
        space--;
       }else{
         star-=2;
        space++;
       }
      }
    }

    return 0;
}