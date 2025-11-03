
// Write a program which accept number from user and return multiplication of all digits.

/*

Input : 2395
Output : 270

Input : 1018
Output : 0

Input : 4521
Output : 40

Input : 9440
Output : 0

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : MultiplyDigit
//  Description :   It is used to multiply all digits in a number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int MultiplyDigit(int iNo)
{
    int iDigit=0;
    int iMul=1;

    while(iNo>0)
    {
        iDigit= iNo%10;
        iMul=iMul*iDigit;
        iNo=iNo/10;
    }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=MultiplyDigit(iValue);
    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 270

// Input : 1018 
// Output : 0

// Time Complexity : O(N) where N is number of digits   

////////////////////////////////////////////////////////////////////