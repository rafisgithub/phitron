#include<stdio.h>

int main(){
     long long int eye,mouth,body,min,r_e,r_m,r_b;

    scanf("%lld %lld %lld",&eye,&mouth,&body);
    min = (eye<=mouth && eye<=body)?eye:((mouth<=body)?mouth:body);
    r_e = eye-min;
  
    r_m = mouth-min;
    r_b = body-min;

    if(r_e/2<=r_b){
        printf("%lld\n",min+(r_e/2));
    }else{
        printf("%lld\n",min+r_b);
    }

    return 0;
}