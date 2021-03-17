#include<stdio.h>
int prime(int n, int i)
{
	if (i==1)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
			return(prime(n,i-1));
		}
	}
}

int main()
{
	int a;
	printf("Enter the number to be checked  ");
	scanf("%d",&a);
	int res=prime(a,a/2);
	if(res==1)
	{
		printf("%d is a Prime Number",a);
	}
	else
	{
		printf("%d is not a Prime Number",a);
	}
	return 0;
}
