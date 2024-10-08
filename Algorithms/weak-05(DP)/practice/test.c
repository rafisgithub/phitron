#include<stdio.h>
#include<math.h>

float f(float x) {
    return x*x*x - x -1;
}
int main() {
    float x1,x2,x0,e,f1,f2,f0;
    int i = 1;

    printf("Enter x1 value: \n");
    scanf("%f",&x1);
    printf("Enter x2 value: \n");
    scanf("%f",&x2);
    printf("Enter e value: \n");
    scanf("%f",&e);

    while(1) {
        
    f1 = f(x1);
    f2 = f(x2);

    if(f1*f2 > 0){
        printf("Not right\n");
        return 1;
    } else {
       x0 = x1 - ((f(x1) * (x2 - x1)) / (f(x2) - f(x1)));
        f0 = f(x0);  
        printf("Value of Iteration %d x1 = %.3f , x2= %.3f ,x0 = %.3f and f(x1) = %.3f f(x2) = %.3f and f(x0) = %.3f\n",i,x1,x2,x0,f1,f2,f0);    
        i++;
    }
    if(f1*f0 < 0){
        x2 = x0;
    } else {
        x1 = x0;
    }

    if(fabs(f0) < e) {
        printf("Root : %.3f",x0);
        break;
    }
    }
    return 0;
}