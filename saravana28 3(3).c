#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[20],i,b=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b=b+1;
if(a[i]!=b)
{   printf("\n %d",b);
}
}
getch();
return 0;
}
