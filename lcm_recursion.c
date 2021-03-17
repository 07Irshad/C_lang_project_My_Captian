#include<stdio.h>
int lcm(int m,int n)
{
	static int multiples=0;
	multiples+=n;
	if((multiples%m==0)&&(multiples%n==0))
	{
		return multiples;
	}
	else 
	{
		return lcm(m,n);
	}
}

int main()
{
	int a,b,res;
	printf("Enter the Numbers :   ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		res=lcm(b,a);
	}
	else
	{
		res=lcm(a,b);
	}
	printf("\nThe LCM of the given numbers is %d \n",res);
	return 0;
}
