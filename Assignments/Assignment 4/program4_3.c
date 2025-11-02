
// Wrie a program which accept number from user and display all its non factors.

/*
Input : 12          Output : 5 7 8 9 10 11

Input : 13          Output : 2 3 4 5 6 7 8 9 10 11 12

Input : 10          Output : 3 4 6 7 8 9
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to display Non-factor
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt)  != 0)
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

    NonFact(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//  Input :         12
//  Output :        5 7 8 9 10 11
////////////////////////////////////////////////////////////////////