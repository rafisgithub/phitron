#include<stdio.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    int counter[n];

    for(int i = 0; i < n; i++) {
        counter[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j]==1){
                counter[i]++;
            }
        }
    }

    int max = -1;
    int rows = 0;

    for(int i = 0; i < n; i++) {
       if(max < counter[i]) {
            max = counter[i];
            rows = i;
       }
    }

    printf("%d\n",rows);
    return 0;
}