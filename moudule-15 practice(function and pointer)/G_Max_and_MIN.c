#include<stdio.h>
int get_max_num(int *arr,int n){
    int max = *arr;

    for(int i=1;i<n;i++){
        if(max<*(arr+i)){
            max = *(arr+i);
        }
    }
    return max;
}
int get_min_num(int *arr,int n){
    int min = *arr;
    for(int i=1;i<n;i++){
        if(min>*(arr+i)){
            min = *(arr+i);
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   int max = get_max_num(arr,n);
   int min = get_min_num(arr,n);
   
   printf("%d %d",min,max);
    return 0;
}