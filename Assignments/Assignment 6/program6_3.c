
// Write a program which accept two numbers and check whether numbers are equal or not.

/*

Input :         10 10
Output :        Equal

Input :         10 12
Output :        Not Equal

*/

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   It is used to display number is equal or not
//  Input :         Integer,Integer
//  Output :        boolean
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers\n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////

//  Input :         10 10
//  Output :        Equal

//  Input :         10 12
//  Output :        Not Equal

//  Input :         10 -10
//  Output :        Not Equal

//  Time Complexity : O(1)

////////////////////////////////////////////////////////////////////