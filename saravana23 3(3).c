#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,gcd,lcm,i;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m&&i<=n;i++)
	{
	  if(m%i==0 && n%i==0)        //checks if i is factor of n1 and n2
	  {
	      gcd=i;
	  }
	}
	lcm=(m*n)/gcd;
	printf("lcm of %d and %d is %d",m,n,lcm);
	return 0;
}
