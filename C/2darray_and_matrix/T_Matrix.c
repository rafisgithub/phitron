#include<stdio.h>
#include<math.h>

int main() {

    int r;
    scanf("%d",&r);
    
    int arr[r][r];

    for(int i=0; i< r;i++) {
        for(int j=0; j< r;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    long long int primaryd_sum = 0;
    long long int secondaryd_sum = 0;
     long long int result  = 0;



        for(int i=0; i< r;i++) {
            for(int j=0; j< r;j++) {
                if(i==j) {
                    primaryd_sum += arr[i][j];
                }
                if((i+j) == r-1){
                secondaryd_sum += arr[i][j];
            }
            }

        }

   result = abs(primaryd_sum - secondaryd_sum);

    printf("%d\n",result);

    return 0;
}