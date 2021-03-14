#include <stdio.h>
int main()  
{
	int i,j;
	for(i=1;i<=6;i++)   
	{
		for(j=0;j<2*i;j++)
		{
			printf("%d",j%2);
		}
		printf(" ");
	}
	return 0;
}
