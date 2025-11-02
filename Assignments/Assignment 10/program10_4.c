
// Write a program which accept temperature in Fahrenheit and convert it into celcius. (1 celsius = (Fahrenheit -32) * (5/9))

/*

Input : 10
Output : -12.222222  (10 -32) * (5/9) 

Input : 34
Output : 1.111111  (34 -32) * (5/9)

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description :   It is used to display temperature into celcius
//  Input :         float
//  Output :        float
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float fCs = 1;
    fCs = ((fTemp - 32) * (5.0/9));
    // printf("%f\n",fCs);

    return fCs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenhit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////

//  Input :         10
//  Output :        -12.222222  (10 -32) * (5/9)

//  Input :         34
//  Output :        1.111111  (34 -32) * (5/9)

//  Time Complexity : O(1)

/////////////////////////////////////////////////////////////////