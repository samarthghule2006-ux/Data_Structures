// Accept number of rows and number of columns from user and display below pattern

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
   

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(i==1 || i==iRow || j==1 || j==iCol)
           {
                printf("*\t");
           }
           else
           {
                printf("@\t");
           }

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

Input : iRow = 6     iCol = 5
Output :    *   *   *   *   *
            *   @   @   @   *
            *   @   @   @   *
            *   @   @   @   *
            *   @   @   @   *
            *   *   *   *   *
         
 */