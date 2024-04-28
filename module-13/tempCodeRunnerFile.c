#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int x;
    scanf("%d",&x);
int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        for(int j=1;j<len;j++){
            int sum = 0;
            sum = arr[i]+arr[j];
            if(sum==x){
                printf("%d + %d = %d\n",arr[i],arr[j],sum);
                break;
            }
                


        }
    }
    return 0;
}