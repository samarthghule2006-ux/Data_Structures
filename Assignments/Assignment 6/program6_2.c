
// Write a program which accept one number from user and check whether that number is greater than 100 or not.

/*

Input :         101
Output :        Greater

Input :         39
Output :        Smaller

*/

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   It is used to display number is greater than 100 or not.
//  Input :         Integer
//  Output :        boolean
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////

// Input :         101
// Output :        Greater

// Input :         39
// Output :        Smaller

// Time Complexity : O(1)

////////////////////////////////////////////////////////////////////