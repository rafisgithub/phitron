#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
       int n;
       scanf("%d",&n);

       int arr[n+1];

       for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
       }

       long long int sum;
       int min = 1000000000;
       int k = 0;
       
       for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
           sum = arr[i] + arr[j] + j - i;
        if(min > sum) {
           min = sum;
        }
       }
     

      }

  
        printf("%d\n",min);

  

    }
    return 0;
}