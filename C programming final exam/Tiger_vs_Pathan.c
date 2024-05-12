#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int p=0,t=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T') t++;
        if(s[i]=='P') p++;
    }
    if(t>p){
        printf("Tiger\n");
    }else if(p>t){
        printf("Pathaan\n");
    }else{
        printf("Draw\n");
    }

    }


    return 0;
}