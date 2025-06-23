#include <stdio.h>

int main() {

    int a = 5; // 5 in binary is 0101
    int b = 6; // 6 in binary is 0110
    int c = a & b;

    printf("a & b = %\n", c);

    return 0;
}