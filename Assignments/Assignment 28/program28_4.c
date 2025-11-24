// Accept number of rows and number of columns from user and display below pattern


#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Column:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}

/*

Input : iRow = 4     iCol = 5
Output : 4  4   4   4   4
         3  3   3   3   3
         2  2   2   2   2
         1  1   1   1   1

 */