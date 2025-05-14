#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int space = n -1;

    int line = 2*n -1;

    int numberOfchar = 1;

    for(int i = 0; i < line; i++) {

        for(int j = 0; j < space; j++) {
            printf(" ");
        }

        for(int k = 0; k < numberOfchar; k++) {
            if(i%2==0)
            printf("#");
        else
            printf("-");
        }
        
        printf("\n");

        if(i<n-1){
            space--;
            numberOfchar+=2;
        }else{
            space++;
            numberOfchar-=2;
        }

    }

    return 0;
}