#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your Marks :   ");
	scanf("%d",&marks);
	if(marks>=40)
	{
		if(marks>=85 && marks<=100)
		{
			printf("Grade A");
		}
		else if(marks>=70 && marks<84)
		{
			printf("Grade B");
		}
		else if (marks>=55 && marks<69)
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
