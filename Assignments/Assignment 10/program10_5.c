
// Write a program which accept area in square feet and convert it into sq.meter.(1 square feet = 0.0929 square meter)

/*

Input : 5
Output : 0.464500

Input : 7
Output : 0.650300

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description :   It is used to display area into sq.meter
//  Input :         Integer
//  Output :        Double
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    float fSqM = 1;
    fSqM = iNo * 0.0929;

    return fSqM;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////

//  Input :         5
//  Output :        0.464500

//  Input :         7
//  Output :        0.650300

//  Time Complexity : O(1)

/////////////////////////////////////////////////////////////////