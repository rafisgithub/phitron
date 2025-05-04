#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--) {

        int m1,m2,d;

        scanf("%d %d %d",&m1,&m2,&d);
        int number_od_days_require = (m1*d) / (m1+m2);

    
        printf("%d\n",d-number_od_days_require);
    }
    return 0;
}
