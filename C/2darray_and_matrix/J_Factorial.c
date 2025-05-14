#include<stdio.h>

long long int fact(int n) {
    if(n==1){
        return 1;
    }
    
    long long int r = fact(n-1);

    return n * r;
}
int main() {
    int n;
    scanf("%d",&n);

   long long int r = fact(n);
   printf("%lld\n",r);

    return 0;
}