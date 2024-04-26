#include<stdio.h>

int main(){
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int i = 0;

    while(1){
        if(a[i] =='\0' && b[i]=='\0'){
            printf("Equal");
            break;
        }else if(a[i]=='\0'){
            printf("a is smaller then b");
            break;
        }else if(b[i]=='\0'){
            printf("b is chooto");
            break;
        }
        if(a[i]==b[i]){
            i++;
        }else if(a[i]<b[i]){
            printf("a is small");
            break;
        }else{
            printf("B choto\n");
            break;
        }
    }
    return 0;
}