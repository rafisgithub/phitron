#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    //ektu khani validation so that for loop can not be inifinity.
    if(n<=0 || n==1){
        return 1;
    }
    
    for(int i=1; i<=n; i++){
        printf("%d. I Want More Assignments\n",i);
       
    }
    return 0;
}