#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int found = 0;


    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            int sum = 0;
            sum = arr[i]+arr[j];
            if(sum==x){
                printf("%d + %d = %d\n",arr[i],arr[j],sum);
                found = 1;
            }

        }
        if(found){
            break;
        }
    }
    return 0;
}