#include<stdio.h>
void sorting_array_in_acending(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<=n;j++){
            if(*(arr+i)>*(arr+j)){
                int temp;
                temp=*(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
             }
        }
    }

}
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    sorting_array_in_acending(arr,3);
    printf("\n");
     for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}