#include <stdio.h>

int countBulbsOn(unsigned long long int n) {
    unsigned short count = 0;
    for (unsigned long long int i = 1; i * i <= n; i++) {
        count++;
    }
    return count;
}

int main() {
    unsigned int t; 
    scanf("%u", &t);
    
    while (t--) {
        unsigned long long int n; 
        scanf("%llu", &n);
      
        printf("%hu\n", countBulbsOn(n));
    }
    
    return 0;
}
