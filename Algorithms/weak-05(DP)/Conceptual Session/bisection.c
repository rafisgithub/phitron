#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x0, f1, f2, f0, E;
    
    int i = 1;

        printf("Enter the value of x1:");
        scanf("%f", &x1);
        printf("Enter the value of x2:");
        scanf("%f", &x2);
        printf("Enter the value of E:");  
        scanf("%f", &E);
        
        while(1) {
            
        f1 = x1 * x1 * x1 - x1 - 1;
        f2 = x2 * x2 * x2 - x2 - 1;

        if (f1 * f2 > 0)
        {
            printf("Not correct!\n");
            break;
        }
        else
        {
            x0 = (x1 + x2) / 2;
            f0 = x0 * x0 * x0 - x0 - 1;

            printf("Value of Iteration %d is %.3f\n",i,x0);
            i++;
        }

        if ((f1 * f0 )< 0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
        }
        
        if(fabs(f0) < E) {
            printf("Root : %.3f",x0);
            break;
        }
        }



    return 0;
}