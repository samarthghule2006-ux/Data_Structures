
// Write a program which accept number from user and display its factors in decreasing order.

/*
Input : 12          Output : 6 4 3 2 1

Input : 13          Output : 1

Input : 10          Output : 5 2 1
*/
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   It is used to display factors in reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//  Input :         12
//  Output :        6 4 3 2 1
////////////////////////////////////////////////////////////////////