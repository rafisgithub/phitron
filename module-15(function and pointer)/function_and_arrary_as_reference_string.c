#include<stdio.h>
void fun(char *arr){
  *(arr+1) = 'G';

  arr[0] = 'G';
  2[arr]  = 'R';
}
int main(){
   char arr[] = "Hello";
   fun(arr);
   printf("%s",arr);
    return 0;
}