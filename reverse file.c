#include<stdio.h>
int main()
{
    FILE *fp;
    char ch, filename[30], revch[500];
    int i=0, j, Count=0;
    printf("Enter the filename with extension:   ");
    gets(filename);
    fp = fopen(filename, "r");
    printf("\nInput to the Reverse function:  ");
    ch = getc(fp);
    while(ch != EOF)
    {
        Count++;
        putchar(ch);
        revch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\nOutput:  ");
    for(j=(Count-1); j>=0; j--)
    {
        ch = revch[j];
        printf("%c", ch);
    }
    getch();
    return 0;
}
