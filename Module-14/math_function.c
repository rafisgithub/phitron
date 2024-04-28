#include<stdio.h>

int main(){
    double x;
    scanf("%lf",&x);
    int ceil_value = ceil(x);
    int floor_value = floor(x);
    int round_value = round(x);
    float sqrt_value = sqrt(x);
    printf("%d\n",ceil_value);
    printf("%d\n",floor_value);
    printf("%d\n",round_value);
    printf("%f\n",sqrt_value);

    return 0;
}