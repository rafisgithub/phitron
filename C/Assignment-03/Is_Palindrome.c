#include<stdio.h>
#include<string.h>

int is_palindrome(char *s,unsigned short len){

    unsigned short i = 0;
     unsigned short j = len -1;
    unsigned short flag = 1;
   
    while (i<j)
    {
       if(*(s+i) != *(s+j)){
        flag = 0;
       }
       i++;
       j--;
    }
    return flag;
}
int main(){
    char s[1020];
    scanf("%s",s);
    unsigned short len = strlen(s);

  unsigned short t_or_f =  is_palindrome(s,len);

  if(t_or_f){
    printf("Palindrome\n");
  }else{
    printf("Not Palindrome\n");
  }
    return 0;
}