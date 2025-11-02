
// Write a program which accept number from user and return difference between summation of all its and non factors.

/*
Input : 12          Output : -34 (16 - 50)

Input : 10          Output : -29 (8 - 37)
*/  

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   It is used to display difference of factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int FactSum = 0;
    int NonFactSum = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            FactSum = FactSum + iCnt;
        }
        else
        {
            NonFactSum = NonFactSum + iCnt;
        }
    }
    return FactSum - NonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//  Input :         12
//  Output :        -34 (16 - 50)
////////////////////////////////////////////////////////////////////