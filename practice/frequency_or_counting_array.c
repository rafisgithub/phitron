#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);

   int arr[n];
     int count[n];
     


     for (size_t i = 0; i < n; i++)
     {
          count[i] = 0;
     }
          for (size_t i = 0; i < n; i++)
     {
          printf("%d ",count[i] );
     }

   for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
   } 

     for(int i=0;i<n;i++){
          count[arr[i]]++;
     }
     printf("\n");
          for (size_t i = 0; i < n; i++)
     {
          if(count[i]>0){
               printf("%d -> %d\n",i,count[i] );
          }
     }

    return 0;
}