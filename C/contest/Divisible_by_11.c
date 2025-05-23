#include<stdio.h>
#include<string.h>
#include<math.h>


int main() {
    
    char s[101];
    scanf("%s",s);

    long long int odd_sum = 0;
    long long int even_sum = 0;

    for(int pos = strlen(s) -1 ; pos >= 0; pos--) {

        int digit = s[pos] - '0';

        if(pos%2==0){
            even_sum += digit;
        }else{
            odd_sum += digit;
        }
    }

    long long int abs_sum = abs(odd_sum - even_sum);

    if(abs_sum%11==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }


    return 0;
}