#include<stdio.h>

int print(int x) {
    x = 100;
    printf("%d",x);

}
int main() {
    int x;
    scanf("%d",&x);

    print(x);


    return 0;
}