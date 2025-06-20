#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);

    char name[n];


    for(int i=0;i< n;i++){
        scanf("%c",&name[i]);
    }


    for(int i=n-1;i>=0;i--){
        printf("%c",name[i]);
    }

    

    return 0;
}