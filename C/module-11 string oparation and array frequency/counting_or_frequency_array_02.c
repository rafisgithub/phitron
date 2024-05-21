#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);

    char arr[n+1];
    
    scanf("%s",arr);

    int count[26] = {0};

    for(int i=0;i<n;i++){
        int val = arr[i]-'a';
        count[val]++;
    }

    for(int i = 0;i<strlen(arr);i++){

            int val = arr[i]-'a';
            if(count[val]!=0){
            printf("%c -> %d\n",val+97,count[val]);

            }
            count[val] = 0;
        
    }

    return 0;
}