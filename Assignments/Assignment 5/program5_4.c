
// Check positive, negative or zero

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   Check positive, Negative, or zero
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num < 0)
    {
        printf("Number is Negative");
    }
    else if(num > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Zero");
    }
}

int main()
{
    int Number = 0;

    printf("Enter number\n");
    scanf("%d",&Number);

    CheckNumberType(Number);

    return 0;
}

////////////////////////////////////////////////////////////////////

//  Input :         -5
//  Output :        Number is Negative

//  Input :         10
//  Output :        Number is Positive

//  Input :         0
//  Output :        Number is Zero

////////////////////////////////////////////////////////////////////