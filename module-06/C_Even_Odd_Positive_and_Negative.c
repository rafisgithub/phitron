#include<stdio.h>

int main(){
    int n;
    int a;
    int ec = 0;
    int oc = 0;
    int pc = 0;
    int nc = 0;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        // if(a%2==0){
        //     ec++;
        //     if(a<0){
        //         nc++;
        //     }
        //     if(a>0){
        //         pc++;
        //     }
        // }else if(a%2!=0){
        //     oc++;
        //      if(a<0){
        //         nc++;
        //     }
        //     if(a>0){
        //         pc++;
        //     }
        // }else if(a<0){
        //     nc++;
        // }else if(a>0){
        //     pc++;
        // }
        if(a%2==0){
            ec++;
        }else{
            oc++;
        }

        if(a<0){
            nc++;
        }else if(a>0){
            pc++;
        }

    }
    printf("Even: %d\n",ec);
    printf("Odd: %d\n",oc);
    printf("Positive: %d\n",pc);
    printf("Negative: %d\n",nc);
    
    return 0;
}