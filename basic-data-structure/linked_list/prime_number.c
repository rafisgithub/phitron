#include <stdio.h>
int main (){

    int n;

    int x = 1;

    scanf("%d",&n);
    
    for (int i=2;i<n;i++){
        if(n%i==0){
           x = 0;
        }
        
    }

    if(x == 1){
        printf("Prime Number");
    }

    if(x == 0){
        printf("Not Pirme");
    }

    return 0;
}