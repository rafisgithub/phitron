#include<stdio.h>

long long int sum(int x,int y) {
    return x + y;
}
int main() {
    
    int x,y;
    scanf("%d %d",&x,&y);

    printf("%lld\n",sum(x,y));
    return 0;
}