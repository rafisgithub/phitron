#include<stdio.h>
#include<stdbool.h>


int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    bool flag = true;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(i==j || i+j == n-1){

                if(arr[i][j] != 1){
                    flag = false;
                    break;
                }

            }else{

                if(arr[i][j] != 0 ){
                    flag = false;
                    break;
                }
            }

           
        }

    
    }

    if(flag){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}