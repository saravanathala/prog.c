#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
printf("\n enter the numbers");
scanf("%d\t%d\t%d",&a,&b,&c);
d=a*b;
e=d%c;
printf("\n %d",e);
getch();
return 0;
}
