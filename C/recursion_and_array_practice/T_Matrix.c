#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int row = n,col = n;
    int arr[row][col];




    for(int row=0;row<n;row++){
        for(int col = 0;col<n;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    int primary_diagonal_sum = 0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==col){
                primary_diagonal_sum+=arr[row][col];
            }
        }
    }
    // printf("%d\n",primary_diagonal_sum);
    int secondary_dagonal_sum = 0;
for(int row=0;row<n;row++){
    for(int col=0;col<n;col++){
        if(row+col==n-1){
            secondary_dagonal_sum += arr[row][col];
        }
    }
}
    // printf("%d\n",secondary_dagonal_sum);

int sum = primary_diagonal_sum - secondary_dagonal_sum;


   printf("%d",abs(sum));
    return 0;
}





