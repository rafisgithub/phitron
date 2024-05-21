#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
    int star = 1;
    int space=5;

    for(int i=1;i<=11;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=5){
        star+=2;
        space--;
        }else{
           space=5;
           star=1;
        }


    }
    }else if(n==3){
    int star = 1;
    int space=6;
    for(int i=1;i<=12;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=6){
        star+=2;
        space--;
        }else{
           space=5;
           star=3;
        }
    }
    }else if(n==5){
    int star = 1;
    int space=7;
    for(int i=1;i<=13;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=7){
        star+=2;
        space--;
        }else{
           space=5;
           star=5;
        }
    }
    }else if(n==7){
    int star = 1;
    int space=8;
    for(int i=1;i<=14;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=8){
        star+=2;
        space--;
        }else{
           space=5;
           star=7;
        }
    }
    }else if(n==9){
    int star = 1;
    int space=9;
    for(int i=1;i<=15;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=9){
        star+=2;
        space--;
        }else{
           space=5;
           star=9;
        }
    }
    }else if(n==11){
    int star = 1;
    int space=10;
    for(int i=1;i<=16;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=10){
        star+=2;
        space--;
        }else{
           space=5;
           star=11;
        }
    }
    }else if(n==13){
    int star = 1;
    int space=11;
    for(int i=1;i<=17;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=11){
        star+=2;
        space--;
        }else{
           space=5;
           star=13;
        }
    }
    }else if(n==15){
    int star = 1;
    int space=12;
    for(int i=1;i<=18;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=12){
        star+=2;
        space--;
        }else{
           space=5;
           star=15;
        }
    }
    }else if(n==17){
    int star = 1;
    int space=13;
    for(int i=1;i<=19;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=13){
        star+=2;
        space--;
        }else{
           space=5;
           star=17;
        }
    }
    }else if(n==19){
    int star = 1;
    int space = 14;
    for(int i=1;i<=20;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=14){
        star+=2;
        space--;
        }else{
           space=5;
           star=19;
        }
    }
    }else if(n==21){
    int star = 1;
    int space = 15;
    for(int i=1;i<=21;i++){
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        if(i<=15){
        star+=2;
        space--;
        }else{
           space=5;
           star=21;
        }
    }
    }
    return 0;
}