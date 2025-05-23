#include <stdio.h>
#include <stdbool.h>

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    bool flag = false;

    for (int i = l; i <= r; i++) {
        int odd = 0, even = 0;
        int temp = i;

        while (temp > 0) {
            int last_digit = temp % 10;
            if (last_digit % 2 == 0)
                even++;
            else
                odd++;
            temp /= 10;
        }

        if (odd == even) {
            printf("%d\n", i);
            flag = true;
        }
    }

    if (!flag) {
        printf("-1\n");
    }

    return 0;
}
