#include <stdio.h>

void odd_even() {

     unsigned short n;
    scanf("%hu", &n);

    unsigned int arr[n];

    for(unsigned short i= 0;i < n; i++) {
        scanf("%u", &arr[i]);
    }

    unsigned short even_counter = 0;
    unsigned short odd_counter = 0;
    
    for(unsigned short i = 0; i < n; i++) {
        if(arr[i]%2!=0) {
            odd_counter++;
        } else {
            even_counter++;
        }
    }
    printf("%hu %hu",even_counter,odd_counter);
}


int main() {
   
    odd_even();

    
    return 0;
}
