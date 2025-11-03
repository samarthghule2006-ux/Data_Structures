
// Write a program which accept number from user and count odd digits in that number

/*
Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0

*/

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountOdd
//  Description :   It is used to count odd digits in a number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit= iNo%10;
        
        if(iDigit%2!=0)
        {
            iCount++;
        }
        iNo=iNo/10;
        
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////

// Input : 2395
// Output : 3   

// Input : 1018
// Output : 2

// Time Complexity : O(N) where N is number of digits

/////////////////////////////////////////////////////////////////////