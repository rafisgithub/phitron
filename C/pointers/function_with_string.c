#include<stdio.h>
#include<string.h>


void fun(char *s) {

   int s_len = strlen(s);
   for(int i=0; i< s_len;i++) {
       printf("%c",s[i]);
   }
}
int main() {
    char s[10];

 
    scanf("%s",s);

    fun(s);
    return 0;
}