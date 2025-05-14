#include<stdio.h>

int main() {

    int r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c];

    for(int i=0; i< r;i++) {
        for(int j=0; j< c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    if(r==1){
        printf("row matrix");
    }else{
        printf("Not row");
    }
    return 0;
}