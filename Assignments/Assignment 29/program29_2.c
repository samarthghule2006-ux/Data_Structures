// Accept number of rows and number of columns from user and display below pattern

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1;i<=iRow;i++)
    {
        if((i%2)!=0)
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",(j*2));
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",((j*2)-1));
            }
            printf("\n");

        }
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

Input : iRow = 4     iCol = 4
Output : 2  4   6   8   10
         1  3   5   7   9
         2  4   6   8   10
         1  3   5   7   9

 */