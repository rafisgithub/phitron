
#include<stdio.h>
#include<limits.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int min=INT_MAX,max=INT_MIN;
//make two variable for containning min and max index.
int min_index;
int max_index;

for(int i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
min_index = i; // this i indicate is the min value index
}
}
for(int i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
max_index = i; //this i indicate is the max value index
}
}
int temp=a[min_index];
a[min_index]=a[max_index];
a[max_index]=temp;
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}