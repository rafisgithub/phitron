#include<stdio.h>
int count_before_one(unsigned short *arr, unsigned short n){
    unsigned short counter = 0;
    for(unsigned short i=0;i<n;i++){
            if(*(arr+i)!=1){
                counter++;
            }else{
                return counter;
            }
    }
    return counter;
}
int main(){
    unsigned short n;
    scanf("%hu",&n);

    unsigned short arr[n];

    for(unsigned short i=0;i<n;i++){
        scanf("%hu",&arr[i]);
    }
   unsigned short counter = count_before_one(arr,n);
   printf("%hu",counter);
    return 0;
}