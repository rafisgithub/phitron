#include<stdio.h>
int main()
{
    int i,n;
    for(i=1;i<=10;i=i+1)
    {
        if(i==5)
        {
            break; // যদি i এর মান ৫ হয় তাহলে লুপ থেমে যাবে। 
        }
        printf("%d\n",i);
    }
    return 0;
}