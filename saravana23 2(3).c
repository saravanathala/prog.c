#include<stdio.h>
#include<conio.h>
int main()
{
if(m==0||n==0)
return 0;
if(m==n)
return m;
if(m>n)
{
return gcd(m-n,n);
}
return gcd(m,m-n);
}
void main()
{
int m,n;
clrscr();
scanf("%d%d",&m,&n);
printf("GCD of %d and %d is %d",m,n,gcd(m,n));
getch();
return 0;
}
