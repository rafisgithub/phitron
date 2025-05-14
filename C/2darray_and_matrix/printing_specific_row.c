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

    int spcefic_row;
    scanf("%d",&spcefic_row);

    for(int i=0; i<c;i++) {
        printf("%d ",arr[spcefic_row][i]);
    }
    return 0;
}