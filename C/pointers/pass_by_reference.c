#include<stdio.h>

int scan(int *x) {
    *x = 100;

}
int main() {
    int x;
    scanf("%d",&x);

    scan(&x);

    printf("%d",x);


    return 0;
}