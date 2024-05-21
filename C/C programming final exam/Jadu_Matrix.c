#include <stdio.h>

int main() {
    int n, m;
    int flag = 1;

    scanf("%d %d", &n, &m);
    if (n != m || n < 1 || n > 100) {
        printf("NO");
        return 0;
    }

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i == j || i + j == n - 1) && arr[i][j] != 1) {
                flag = 0;
                break;
            }
            if (i != j && i + j != n - 1 && arr[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    if (flag) {
        printf("x");
    } else {
        printf("NO");
    }

    return 0;
}
