#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

<<<<<<< HEAD
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int i = 0;
    int j = n -1;

    while(i<j){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
=======
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    

    int i = 0;
    int j = n-1;

    while(i<j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

>>>>>>> 5a92f370b856ad92d7873df496bad461da17d970
    return 0;
}