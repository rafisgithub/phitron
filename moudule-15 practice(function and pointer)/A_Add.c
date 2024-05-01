#include<stdio.h>
void sum(int *x ,int *y,int *ans){
   *ans = *x+*y;

}
int main(){
     int x,y;
     int ans =0;
    scanf("%d %d",&x,&y);

    sum(&x,&y,&ans);

    printf("%d",ans);
    return 0;
}