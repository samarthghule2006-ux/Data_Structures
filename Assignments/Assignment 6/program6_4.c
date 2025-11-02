
// Write a program which accept three numbers and print its multiplication.

/*

Input :         5 4 7
Output :        140

Input :         5 0 7
Output :        35

Input :         0 0 0
Output :        0

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   It is used to display multiplication
//  Input :         Integer,Integer,Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 1;
    }
    else
    {
        int iVal1 = (iNo1 == 0) ? 1 : iNo1;
        int iVal2 = (iNo2 == 0) ? 1 : iNo2;
        int iVal3 = (iNo3 == 0) ? 1 : iNo3;

    return iVal1 * iVal2 * iVal3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////

//  Input :         5 4 7
//  Output :        140

//  Input :         5 0 7
//  Output :        35

//  Input :         0 0 0
//  Output :        0

//  Time Complexity : O(1)

///////////////////////////////////////////////////////////////////
