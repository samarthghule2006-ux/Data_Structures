
// Write a program which accept number from user and return summation of all its non factors.

/*
Input : 12          Output : 50 (5 + 7 + 8 + 9 + 10 + 11)   

Input : 13          Output : 77 (2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12)

Input : 10          Output : 37 (3 + 4 + 6 + 7 + 8 + 9)
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to display sum of Non-factor
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//  Input :         12
//  Output :        50 (5 + 7 + 8 + 9 + 10 + 11)
////////////////////////////////////////////////////////////////////