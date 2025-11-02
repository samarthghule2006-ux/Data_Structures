///////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>                   //For Input Output
#include<stdbool.h>                 //For bool Datatype

///////////////////////////////////////////////////////////////////
//
//  Function Name:      CheckEvenOdd 
//  Description:        It is used to check even or odd
//  Input:              Integer
//  Output:             Boolean
//  Author:             Samarth Sandip Ghule
//  Date:               10/10/2025
//
///////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem=iNo%2;

    if(iRem==0)
    {    return true;   }
    else
    {   return false;  }
}

///////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {   printf("%d is an Even Number\n",iValue);    }
    else
    {   printf("%d is a Odd Number\n",iValue);  }

    return 0;
}
