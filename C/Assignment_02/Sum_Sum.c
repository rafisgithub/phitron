#include<stdio.h>

int main(){
    int n;
    int sum_of_positive_number = 0;
    int sum_of_negative_number = 0;
    scanf("%d",&n);
    int V[n];
    for(int i=0; i<n; i++){
        scanf("%d",&V[i]);
    }
    for(int i=0; i<n; i++){
        if(V[i]>=0){
            sum_of_positive_number +=V[i]; 
        }else{
            sum_of_negative_number += V[i];
        }
    }
    printf("%d %d",sum_of_positive_number,sum_of_negative_number);
    return 0;
}