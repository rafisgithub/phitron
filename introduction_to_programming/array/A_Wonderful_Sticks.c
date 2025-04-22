#include <stdio.h>
#include <string.h>

void solve(int n, char s[]) {
    int res[105], idx = 0;
    int i = 0;

    while (i < n) {
        int j = i;

        // Find a block where all are '>' or until the condition breaks
        while (j < n - 1 && s[j] == '>') {
            j++;
        }

        // Fill from j+1 down to i+1 to reverse this segment
        for (int k = j + 1; k > i; k--) {
            res[idx++] = k;
        }

        i = j + 1;
    }

    // Print result
    for (int i = n-1; i <=0; i--) {
        printf("%d ", res[i]);
    }
    printf("\n");
}

int main() {
    int t, n;
    char s[105];

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        scanf("%s", s);
        solve(n, s);
    }

    return 0;
}
