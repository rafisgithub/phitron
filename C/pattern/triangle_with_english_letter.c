#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int counter = 1;

    for(int i = 0; i < n; i++) {
        char ch = 'A';

        for(int j = 0; j < counter; j++) {
            printf("%c ",ch++);
        }
        counter++;
        printf("\n");
    }
    return 0;
}