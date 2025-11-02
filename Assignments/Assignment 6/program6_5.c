
// Write a program which accept total marks and obtained marks from user and calculate percentage.

/*
Input :         1000    745
Output :        74.500000%

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   It is used to display percentage
//  Input :         Integer,Integer
//  Output :        float
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

float Percentage(int Total_Marks,int obtained_Marks)
{
    if(Total_Marks == 0)
    {
        return 0.0;
    }

    return ((float)obtained_Marks / Total_Marks) * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    
    printf("%f percent",fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////

//  Input :         1000    745
//  Output :        74.500000%

//  Time Complexity : O(1)

//////////////////////////////////////////////////////////////////
