#include<stdio.h>
#include<math.h>


int main() {

    int arr[5][5];

    for(int i=0; i< 5;i++) {
        for(int j=0; j< 5;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

   int found_at_i;
   int found_at_j;

    for(int i=0; i< 5;i++) {
        for(int j=0; j< 5;j++) {
            if(arr[i][j] == 1){
                found_at_i = i;
                found_at_j = j;
            }
        }
    }

    int x  = 0;
    int y = 0;
    x = abs(found_at_i - 2);
    y = abs(found_at_j - 2);

    printf("%d\n",x+y);
       

    return 0;
}