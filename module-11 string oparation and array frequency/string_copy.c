#include<stdio.h>

int main(){
    char a[100] = "apple";
    char b[100] = "orange";
    scanf("%s %s",a,b);

    printf("%s %s\n",a,b);
    // for(int i =0;i<sizeof(a)/sizeof(char);i++){
        
    //     a[i] = b[i];
    // }
    // for(int i =0;i<sizeof(a)/sizeof(char);i++){
    //     char temp = a[i];
    //     a[i] = b[i];
    //     b[i] = temp;


    // }
    strcpy(a,b);

    printf("%s %s",a,b);
    return 0;
}