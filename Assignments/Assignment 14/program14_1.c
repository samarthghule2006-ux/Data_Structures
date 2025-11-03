
// Write a program which accept number number from user and display its digits in reverse order.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   It is used to display digits in reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////

// Input : 15
// Output : 5 1

// Input : 2395
// Output : 5 9 3 2

// Time Complexity : O(N)

///////////////////////////////////////////////////////////////////