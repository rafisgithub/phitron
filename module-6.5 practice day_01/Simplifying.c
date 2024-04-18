#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);

        int x = a;
        int y = b;

        if(y==0){
             return 0;
        }
        if(x==0){
            printf("0\n");
        }
    if(a<b){
       
       while (a!=0){
        if(x%a==0 && b%a==0){
        printf("%d/%d\n",x/a,b/a);
        break;
       }else{
        a--;
       }
       }
       
    }else if(a>b){
         while (b!=0){
        if(y%b==0 && a%b==0){
             if(x%y==0){
             printf("%d\n",x/y);
            }else{
            printf("%d/%d\n",a/b,y/b);
            }
        break;
       }else{
        b--;
       }
       }
    }
    else{
        
            if(x%y==0){
             printf("%d\n",x/y);
            }else{
                printf("%d/%d\n",x,y);
            }
       
        
     
    }
    return 0;
}
