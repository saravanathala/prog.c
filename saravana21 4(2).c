#include<stdio.h>
#include<conio.h>
int main ()
{
 char s[200];
  gets(s);
  int i;      
  int num = 0;
  for(i =0;i<strlen(s);i++) {
  if(s[i] =='.' || s[i]==' ')
  {
num++;
 }
 }
 printf("%d\n",num);
 getch ();
 return 0;
 }
