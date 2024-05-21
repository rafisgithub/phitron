#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    long long int sum = 0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    if(sum<0){
        printf("%lld",(sum*-1));
    }else{
        printf("%lld",sum);
    }
    return 0;
}