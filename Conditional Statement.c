#include<stdio.h>
int main()
{
	int choice=0;
	printf("What would you like to have?\n \n1. French Fries (Rs 99) \n2. Burger (Rs 129) \n3. Pasta (Rs159) \n4. Sandwitch (Rs79) \n5. Pizza (Rs199)  \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food Item - French Fries \nPrice = Rs99");
			break;
		case 2:
			printf("Food Item - Burger \nPrice = Rs129");
			break;
		case 3:
			printf("Food Item - Pasta \nPrice = Rs159");
			break;
		case 4:
			printf("Food Item - Sandwitch \nPrice = Rs79");
			break;
		case 5:
			printf("Food Item - Pizza \nPrice = Rs199");
			break;
		default: printf("Invalid Choice");								
	}
}
