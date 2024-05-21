#include<stdio.h>
void fun(int n){
   if(n==0) return;

   int x = n%10;

   fun(n/10);

   printf("%d ",x);
}
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    fun(n);

    printf("\n");
    }

    return 0;
}