#include<stdio.h>
#include<math.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    
    int arr[n][m];

    for(int i=0; i< n;i++) {
        for(int j=0; j< m;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    int flag = 0;

    for(int i=0; i< n;i++) {
        for(int j=0; j< m;j++) {
            if(x==arr[i][j]){
                flag = 1;
            }
        }
    }

    if(flag){
        printf("will not take number\n");
    }else{
       printf("will take number\n");

    }


   

    return 0;
}