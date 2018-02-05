#include<Stdio.h>
#include<conio.h>
int main ()
{
long long a;
int count =0
clrscr();
printf("enter the integer number");
scanf("%d",&a);
while(a!=0)
{
a/=10;
++count;
}
printf("number of digits %d",count);
getch();
return 0;
}
