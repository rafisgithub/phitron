#include<stdio.h>
#include<limits.h>
void find_even_indices_in_reverse_order(int * arr,unsigned short n,int index){
    if(index>=n){
        return;
    }
   if(index%2==0){
    find_even_indices_in_reverse_order(arr,n,index+2);
    printf("%d ",arr[index]);
   }else{
    find_even_indices_in_reverse_order(arr,n,index+1);
   }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    find_even_indices_in_reverse_order(arr,n,0);
    return 0;
}