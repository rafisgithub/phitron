#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0) return false;
    return true;
}

int next_prime(int num) {
    while (true) {
        num++;
        if (is_prime(num)) return num;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];
    int prime = 2;
    int row_start = 0, row_end = N - 1;
    int col_start = 0, col_end = N - 1;

    while (row_start <= row_end && col_start <= col_end) {
        for (int j = col_start; j <= col_end; j++) {
            matrix[row_start][j] = prime;
            prime = next_prime(prime); 
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++) {
            matrix[i][col_end] = prime;
            prime = next_prime(prime); 
        }
        col_end--;

        if (row_start <= row_end) {
            for (int j = col_end; j >= col_start; j--) {
                matrix[row_end][j] = prime;
                prime = next_prime(prime); 
            }
            row_end--;
        }

        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                matrix[i][col_start] = prime;
                prime = next_prime(prime); 
            }
            col_start++;
        }
    }

    // Print the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
