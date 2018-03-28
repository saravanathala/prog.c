#include<stdio.h>
#include<conio.h>
int main()
{
int num,d,r;
printf("\n Enter the number");
scanf("%d",&num);
while(num!=0)
{
d=num%10;
num=num/10;
r=r*10+digit;
printf("\n Reverse of a number is :%d",r);
}
getch();
return 0;
}
