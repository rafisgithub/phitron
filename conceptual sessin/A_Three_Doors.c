#include<stdio.h>
void solve(){
    unsigned int key;
    scanf("%u",&key);

    int arr[4];
    for(int i=1;i<=3;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[key]==0){
        printf("NO\n");
        return;
    }
    key = arr[key];
    if(arr[key]==0){
        printf("NO\n");
        return;
    }
    printf("YES\n");
}
int main(){
    unsigned int t;
    scanf("%u",&t);

    while(t--){
        solve();
    }

    return 0;
}