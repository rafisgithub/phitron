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


    int flag = 1;

    if(r==c) {

    for(int i=0; i< r;i++) {
        for(int j=0; j< c;j++) {
            if(i!=j){

       
                if(arr[i][j] != 0){
                    flag = 0;
                }
            }
        }
    }
    }else{
        printf("Not primary diagonal\n");
    }

    if(flag) {
        printf("primary Diagonal\n");
    }else{
        printf("NOT\n");
    }
    return 0;
}