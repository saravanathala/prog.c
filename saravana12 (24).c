#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,temp;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}
