#include<stdio.h>
#include<conio.h>
int main()
{
int num,digit,p=1;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
p=p*digit;
}
printf("\n product=%d",p);
getch();
}
