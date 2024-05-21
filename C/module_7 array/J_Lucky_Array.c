#include<stdio.h>
#include<limits.h>
int main(){
    unsigned int n;
    scanf("%u",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
     int min_counter = 0;
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            min = arr[i];
            min_counter++;
        }
    }
   if(min_counter%2!=0){
    printf("Lucky\n");
   }else{
    printf("Unlucky\n");
   }
    return 0;
}