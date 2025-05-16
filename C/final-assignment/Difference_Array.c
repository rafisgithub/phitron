#include<stdio.h>
#include<limits.h>
#include<math.h>

int main() {
    int t;
    scanf("%d",&t);

    while (t--) {
        int n;
        scanf("%d",&n);
        int A[n];

        for(int i = 0; i < n; i++) {
            scanf("%d",&A[i]);
        }

        
        int B[n];

        for(int i = 0; i < n; i++) {
            B[i] = A[i];
        }

        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(B[i] > B[j]){
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        int C[n];


        for(int i = 0; i < n; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        for(int i = 0; i < n; i++) {
            printf("%d ",C[i]);
        }

        printf("\n");
    }
    
    return 0;
}