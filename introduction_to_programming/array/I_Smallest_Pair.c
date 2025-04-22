#include<stdio.h>

void solve(int t){


    while(t--) {
        int n;
        scanf("%d",&n);

        int arr[n];

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int min = 100000000;

        for(int i=1;i<n;i++){
            for(int j= i + 1;j<n;j++){
                if(arr[i] + arr[j] + j - i < min){
                    min = arr[i] + arr[j] + j - i;
                }
            }
        }

        printf("%d",min);
    }
}

int main() {

    int t;
    scanf("%d",&t);

    solve(t);

    return 0;
}