
// print all number from 1 to N.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : print_numbers
//  Description :   print all number from 1 to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int iCnt = 0;

    if(limit < 0)
    {
        printf("Invalid Input");
    }

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}

/////////////////////////////////////////////////////////////////////

//  Input :      5
//  Output :     1 2 3 4 5

//  Input :      3
//  Output :     1 2 3

// Time Complexity : O(N)

///////////////////////////////////////////////////////////////////
