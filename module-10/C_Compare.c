#include<stdio.h>
#include<string.h>

int main(){
    char x[21];
    char y[21];
    scanf("%s %s",x,y);
   int x_len = strlen(x);
   int y_len = strlen(y);
   if(x_len<y_len){
    printf("%s\n",x);
   }else{
    printf("%s\n",y);
   }
    return 0;
}