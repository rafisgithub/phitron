#include<stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sv;
    scanf("%d",&sv);

    int index = -1;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(sv==arr[i]){
            index = i;
            flag = true;
            break;
        }
    }

    if(flag) {
        printf("%d\n",index);
    }else{
        printf("%d\n",index);
    }
    return 0;
}