#include<stdio.h>
#include<conio.h>
int main()
{
int n,c,i;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c!=2)
{
printf("\n composite");
}
getch();
return 0;
}
