#include<stdio.h>
int sum(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		return (n%10 + sum(n/10));
	}
}

int main()
{
	int a;
	printf("Enter the number :   ");
	scanf("%d",&a);
	int res=sum(a);
	printf("\nSum of the digits of the given number is %d\n",res);
	return 0;
}
