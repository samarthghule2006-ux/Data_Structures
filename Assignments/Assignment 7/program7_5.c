
// Write a program which accept N and print first 5 multiple of N.

/*

Input : 4
Output : 4 8 12 16 20

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   It is used to display multiple of 5
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {

        printf("%d\t",iNo * iCnt);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////

//  Input :         4
//  Output :        4 8 12 16 20

////////////////////////////////////////////////////////////////////