#include<stdio.h>

int main(){
    int n;
    int x, max_n = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        scanf("%d",&x);
        if(x>max_n){
            max_n = x;
        }

    }
    printf("%d\n",max_n);
    return 0;
}