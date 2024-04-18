#include<stdio.h>

int main(){
    int n,counter=0;
    scanf("%d",&n);
   if(n==1){
    printf("-1\n");
   }else{
     for(int i=2;i<=n;i++){
        counter = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                counter++;
                
            }
        }
         if(counter==2){
                if(n%i==0){
                    printf("%d ",i);
                }
            }  
         
    }
   }
    
    return 0;
}