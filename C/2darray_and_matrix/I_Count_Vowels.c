#include<stdio.h>
#include<string.h>

int count_vowel(char* s ,int i) {

   if(s[i] == '\0') {
        return 0;
   }
    
   int cnt = count_vowel(s,i+1);
     if(s[i]=='a' || s[i] == 'A' || s[i]=='e' || s[i]=='E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
        return cnt + 1;
     }else{
        return cnt;
     }

}
int main() {
    char s[2002];

    fgets(s,2002,stdin);

 
   int r =  count_vowel(s,0);

   printf("%d\n",r);


    return 0;
}