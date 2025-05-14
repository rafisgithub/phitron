#include<stdio.h>

int main() {

   int arr[3];

   for(int i=0; i< 3;i++) {
       scanf("%d",&arr[i]);
   }

   int sortingarr[3];

   for(int i=0; i< 3;i++) {
       sortingarr[i] = arr[i];
   }
   
   for(int i=0; i< 2;i++) {
       for(int j=i+1; j< 3;j++) {
          if(sortingarr[i] > sortingarr[j]) {
            int temp = sortingarr[i];
            sortingarr[i] = sortingarr[j];
            sortingarr[j]  = temp;
          }
       }
   }

   for(int i=0; i< 3;i++) {
       printf("%d\n",sortingarr[i]);
   }

   printf("\n");

   for(int i=0; i< 3;i++) {
       printf("%d\n",arr[i]);
   }
    return 0;
}