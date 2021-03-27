#include <stdio.h>
void inputMatrix(int matrix[][3], int rows, int columns);
void printedMatrix(int matrix[][3], int rows, int columns);
int main()
{
    int matrix[3][3];
    int i, j;
    printf("Enter elements for a 3 x 3 matrix:  ");
    inputMatrix(matrix, 3, 3);
    printf("\nElements of 3 x 3 matrix.\n");
    printMatrix(matrix, 3, 3);
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+matrix[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements = %d\n",sum);
	return 0;
}

void inputMatrix(int matrix[][3], int rows, int columns)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int matrix[][3], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}



