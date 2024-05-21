#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int a,b,c;
        long long int result;
        scanf("%lld %d %d %d",&result,&a,&b,&c);
        long long int x = -1; 
        if (a * b * c != 0 && result % (a * b * c) == 0) {
            x = result / (a * b * c);
        }
        printf("%lld\n",x);
    }
    return 0;
}
