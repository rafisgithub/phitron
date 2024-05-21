#include<stdio.h>
char small_to_capital(char c){
    char capital = c-32;
   
    return capital;
}
int main(){
    char c;
    scanf("%c",&c);
  char capital = small_to_capital(c);
  printf("%c",capital);
    return 0;
}