
// Write a program which accept number from user and display its table.

/*

Input :  2
Output :  2 4 6 8 10 12 14 16 18 20

Input :  -5
Output :  5 10 15 20 25 30 35 40 45 50

Input :  5
Output :  5 10 15 20 25 30 35 40 45 50

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description :   It is used to display table of number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////

//  Input :  5
//  Output :  5 10 15 20 25 30 35 40 45 50

////////////////////////////////////////////////////////////////