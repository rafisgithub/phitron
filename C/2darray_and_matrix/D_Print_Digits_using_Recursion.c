#include<stdio.h>

void print_digits(int n){
    if(n==0){
        return;
    }

    print_digits(n/10);
    int r = n % 10;
    printf("%d ",r);

}
int main() {
    int t;

    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            printf("0");
        print_digits(n);
        printf("\n");
    }
    
    return 0;
}