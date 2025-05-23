#include<stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);


    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);

    }

    int i=0;
    int j = n - 1;
    int counter = 0;

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // for(int i = 0; i < n; i++) {
    //     printf("%d ",arr[i]);
    // }

    while (i<j) {
        if(arr[i] + arr[j] <= k){
            counter++;
            i++;
            j--;
        }else{
            j--;
        }
 
    }

    printf("%d\n",counter);
    
    return 0;
}