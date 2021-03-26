#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char name[30];
    int id;
    int salary; 
} Employee;
int main()
{
    int i, n=20; 
    Employee emp[n];
    printf("Enter %d Employee(s) Details \n",n);
    for(i=0; i<n; i++)
	{
		printf("\nEmployee %d\n",i+1);
        printf("Name:   ");
        scanf("%s",emp[i].name);
        printf("Id:   ");
        scanf("%d",&emp[i].id);
        printf("Salary:   ");
        scanf("%d",&emp[i].salary);
    }
    for(i=0; i<n; i++)
	{
		printf("\nName  : ");
        printf("%s \n",emp[i].name);
        printf("Id    : ");
        printf("%d \n",emp[i].id);
        printf("Salary: ");
        printf("%d \n",emp[i].salary);
        
    }
    return 0;
}
