#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count_divided_by_two = 0;
    int count_divided_by_three = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_divided_by_two++;
        }else if(arr[i]%3==0){
            count_divided_by_three++;
        }else if(arr[i]%2==0 && arr[i]%3==0){
            count_divided_by_two++;
        }
    }

    printf("%d %d\n",count_divided_by_two,count_divided_by_three);
    return 0;
}
