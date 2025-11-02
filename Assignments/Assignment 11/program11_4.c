
// Write a program which accept range from user and return addition of all even numbers in between that range.


/*
Input : 23 30
Output : 108

Input : 10 18
Output : 70

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description :   It is used to display addition of even  
//                  numbers in between that range
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");

        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet  = RangeSum(iValue1,iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d",iRet);
    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////

//  Input :      23 30
//  Output :     108

// Input :      10 18
//  Output :     70

// Time Complexity : O(N)

////////////////////////////////////////////////////////////////////
