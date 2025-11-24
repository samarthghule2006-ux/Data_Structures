// Accept number of rows and number of columns from user and display below pattern


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
        }
        ch++;
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Cloumn:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}

/*

Input : iRow = 3     iCol = 5
Output : A  A   A   A   A
         B  B   B   B   B
         C  C   C   C   C

 */