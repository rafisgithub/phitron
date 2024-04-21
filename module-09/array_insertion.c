#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int position,val;
    scanf("%d %d ",&position,&val);

    for(int i = n; i>position;i--){
        arr[i] = arr[i-1];
    }


    arr[position] = val;
      for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}