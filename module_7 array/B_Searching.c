#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int x;
    int not_found = -1;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==A[i]){
           
            not_found = i;
            break;
        }
    }
   printf("%d",not_found);
    return 0;
}