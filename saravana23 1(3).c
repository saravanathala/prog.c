#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
	int i,j,n,f=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			f=1;
			break;
			}
		}
	}
	if(f==1)
	printf("No");
	else
	printf("yes");
  getch();
	return 0;
}
