
// Find maximum of two numbers

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   It is used to maximum of two numbers
//  Input :         Integer,Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iNum1 = 0, iNum2 = 0;
    int iResult = 0;

    printf("Enter two Numbers :\n");
    scanf("%d %d",&iNum1, &iNum2);

    iResult = FindMax(iNum1,iNum2);

    printf("Maximum is : %d\n",iResult);

    return 0;
}

////////////////////////////////////////////////////////////////////

//  Input :         10 20
//  Output :        20

//  Input :         55 23
//  Output :        55

////////////////////////////////////////////////////////////////////