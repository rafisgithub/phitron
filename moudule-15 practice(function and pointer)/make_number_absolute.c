#include<stdio.h>
int my_abs(int x){
    if(x<0){
        return x*-1;
    }else{
        return x;
    }
}
int main(){
    int n;
    scanf("%d",&n);

int val = my_abs(n);
printf("%d",val);
    return 0;
}