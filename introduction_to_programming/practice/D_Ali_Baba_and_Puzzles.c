#include<stdio.h>

int main() {
    int n1,n2,n3,n4;

    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    if(
        n1+n2+n3 == n4 ||
        n1-n2-n3 == n4 ||
        n1*n2*n3 == n4 ||
        n1+n2-n3 == n4 ||
        n1-n2+n3 == n4 ||
        n1*n2+n3 == n4 ||
        n1*n2-n3 == n4 ||
        n1+n2*n3 == n4
    ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
