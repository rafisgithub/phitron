#include<stdio.h>
long long int sum(int *arr,int n,int index){
  
    if(n<=0){
        return 0;
    }
  return arr[n-1]+sum(arr,n-1,index+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   long long int r = sum(arr,n,0);
   printf("%lld",r);
    return 0;
}