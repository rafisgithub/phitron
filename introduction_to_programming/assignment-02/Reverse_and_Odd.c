#include<stdio.h>

int main() {
    
    int n;

    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }


   int newarr[n/2];
   int j = 0;
    for (int i = 0; i < n; i++)
    {
       if(i%2){
        
        newarr[j] = arr[i];
        j++;
       }
    }

    for(int i = n/2 -1;i>=0;i--){
        printf("%d ",newarr[i]);
    }


    
    


    return 0;
}