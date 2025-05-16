#include <stdio.h>

int main() {
    unsigned long long n;
    scanf("%llu", &n);

    int count = 0;
    while (n > 1) {
        n /= 2;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
