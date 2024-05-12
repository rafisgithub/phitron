#include<stdio.h>
int print_1_to_5(int i){
    if(i==6)
    return;
    printf("%d\n",i);
    print_1_to_5(++i);
}
int main(){
    print_1_to_5(1);
    return 0;
}