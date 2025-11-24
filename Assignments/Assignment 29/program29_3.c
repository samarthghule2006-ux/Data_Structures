// Accept number of rows and number of columns from user and display below pattern

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='a';

    for(i=1;i<=iRow;i++)
    {
        if((i%2)!=0)
        {
            ch='a';
            for(j=1;j<=iCol;j++)
            {
                printf("%c\t",ch);
                ch++;
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=iCol;j++)
            {
                printf("%d\t",j);
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

    printf("Enter the number of Cloumn:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}

/*

Input : iRow = 5     iCol = 5
Output : a  b   c   d   e   
         1  2   3   4   5
         a  b   c   d   e   
         1  2   3   4   5
         a  b   c   d   e   
         
 */