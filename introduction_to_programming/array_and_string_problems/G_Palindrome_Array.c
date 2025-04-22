#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    bool flag = true;

    int i = 0;
    int j = n - 1;

    while(i<j){
        if(arr[i] != arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}