#include<stdio.h>

int main() {
    int t;

    scanf("%d",&t);

    
    while(t--) {
        long long int m,a,b,c;

        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

        long long int abc = a * b *c;
 
        long long int missing_number = m / abc;

        if(m==0) {
            printf("0\n");
        }else if(m == (missing_number*abc)){
            printf("%lld\n",missing_number);
        }else{
            printf("-1\n");
        }

    }
    return 0;
}