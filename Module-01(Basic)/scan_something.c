#include<stdio.h>

int main(){
    int x;
    int y;
    char c;

    printf("This one way\n");

    scanf("%d%c %d%c",&x,&c,&y,&c);
     printf("%d%% %d%%\n",x,y);
     printf("%d%c %d%c\n",x,c,y,c);

    printf("A this is another way\n");

    scanf("%d%% %d%%",&x,&y);
    printf("%d%% %d%%",x,y);

   
    return 0;
}