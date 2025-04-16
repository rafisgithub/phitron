#include<stdio.h>

int main() {
    unsigned int n;
    scanf("%u",&n);


    for(size_t i = 21; i <= n; i++) {
        if(i%3 == 0 && i%7 == 0){
            printf("%u\n",i);
        }
            
    }
    
    return 0;
}