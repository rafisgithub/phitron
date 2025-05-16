#include<stdio.h>
#include<limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int min = INT_MAX;

    for(int i = 0; i < n-1; i++) {
        if(arr[i] < min){
            min = arr[i];
        }
    }

    
    int counter = 0;

    for(int i = 0; i < n; i++) {
        if(min == arr[i]){
            counter++;
        }
    }
    if(counter % 2 ==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }



    return 0;
}