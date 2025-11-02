
// write a program to find even factorial of given number.

/*

Input : 5
Output :8

Input : 10
Output :3840

Input : -5
Output :8

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description :   It is used to display even factorial
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);


    return 0;
}

/////////////////////////////////////////////////////////////////////

//  Input :         5
//  Output :        8

/////////////////////////////////////////////////////////////////////