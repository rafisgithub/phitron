#include<stdio.h>
void fun(int arr[],int len){
    //  printf("Len of array: %p\n",arr);

    for(int i=0;i<len;i++){
        printf("%d ",*(arr+1));

    }
}
int main(){
    int ar[5] = {10,20,30,40,50};
    int len = sizeof(ar)/sizeof(int);
    fun(ar,len);

    return 0;
}