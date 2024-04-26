#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    char b[100];
    scanf("%s %s",a,b);
    //printf("%s %s\n",a,b);

    // int c_size = strlen(a) + strlen(b);
    // char c[c_size+1];
    // // printf("%d",sizeof(c));
    // int j = 0;
    // for(int i=0;i<c_size+1;i++){
    //     c[i] = a[i];
    //     if(i>=strlen(a)){
    //        c[i] = b[j++];
    //     }
    // }
    int j = strlen(a);

    for(int i =0;i<=2;i++){
        a[j] = b[i]; 
        j++;
    }
    // printf("%d",j);
    a[j] = '\0';


    printf("%s",a);
  
    return 0;
}