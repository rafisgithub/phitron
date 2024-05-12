#include<stdio.h>
int fun(int i){
    if(i==11) return 0;
    int sum =0;
    sum = i+ fun(i+1);
    return sum;
    
}
int main(){
   int sum =  fun(1);
   printf("%d",sum);
    return 0;
}