#include<stdio.h>
#include<conio.h>
int main ()
{
inta,b;
long long  power=1;
int i;
printf("enter base");
scanf("%d",&a);
printf("enter exponent");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
power=power*a;
}
printf("%d^%d=%11d",a,b);
getch();
return 0;
}
