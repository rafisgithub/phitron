#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    int position;
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int lowest_num =  INT_MAX;
    for(int i=0;i<n;i++){
        if(lowest_num>A[i]){
            lowest_num = A[i];
            position =1+i;
        }
    }
    printf("%d %d",lowest_num,position);
    return 0;
}