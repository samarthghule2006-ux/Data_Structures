
// Write a program which accept number from user and print its number line.

/*

Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display number line
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////

//  Input :         4
//  Output :        -4 -3 -2 -1 0 1 2

////////////////////////////////////////////////////////////////////