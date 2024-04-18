#include<stdio.h>

int main(){
   long long int x,y,z; // x for eyes; y for mouth; z for body;
    scanf("%lld %lld %lld",&x,&y,&z);
    long long int min = 0;
    if(x<=y && x<=z){
        min = x;
    }else if(y<=x && y<=z){
        min = y;
       
    }else{
        min = z;
    }
    long long int r_e = x-min;
    long long int r_m = y-min;
    long long int r_b = z-min;

    if(x==0 || z==0){
        printf("0\n");
    }else if(r_e==0 || r_b==0){
        printf("%lld",min);
    }
    else{
        if(r_e/2<=r_b){
        printf("%lld",min+(r_e/2));

        }else{
            printf("%lld",min+r_b);

        }
    }

    return 0;
}