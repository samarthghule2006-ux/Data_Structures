
//  Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70rupees.

/*

Input : 10
Output : 700

Input : 3
Output : 210

Input : 1200
Output : 84000

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description :   It is used to display Dollar into Indian currency
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////

//  Input :         10
//  Output :        700

/////////////////////////////////////////////////////////////////////