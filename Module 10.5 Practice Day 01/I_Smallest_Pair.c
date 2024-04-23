#include<stdio.h>
#include<limits.h>
int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int newarr[n*(n-1)/2];
         int k = 0;
        for(int i =0;i<n;i++){
           for(int j = i+1;j<n;j++){
             newarr[k] = arr[i] + arr[j]+(j+1)-(i+1);
            //  printf("%d ",newarr[k]);
             k++;
           }
        }
        int min = INT_MAX;
        for(int i=0;i<sizeof(newarr)/sizeof(int);i++){
            if(min>newarr[i]){
                min = newarr[i];
            }
        }
    printf("%d",min);
    }
     
    
    return 0;
}