#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your Marks :   ");
	scanf("%d",&marks);
	if(marks>=45)
	{
		if(marks>+88)
		{
			printf("Grade A");
		}
		else if(marks>=75 && marks<88)
		{
			printf("Grade B");
		}
		else if (marks>=61 && marks<75)
		{
			printf("Grade C");
		}
		else 
		{
			printf("Grade D");
		}
	}
	else
	{
		printf("Grade F");
	}
}
