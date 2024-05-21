#include<stdio.h>
#include<stdlib.h>

int main() {
    long long int a,b,t;
    scanf("%lld %lld %lld",&a,&b,&t);

  unsigned int abs_diff = abs(a-b);

    
    if (abs_diff > t) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
