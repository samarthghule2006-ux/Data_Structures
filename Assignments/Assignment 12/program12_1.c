
// Print all factors of a number.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : print_Factors
//  Description :   It is used to display all factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

void print_Factors(int Number)
{
    // TODO : print all positive factors of 'number' in ascending order
    
    // Updator
    if(Number < 0)
    {
        Number = -Number;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= Number/2; iCnt++)
    {
        if((Number % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int Number = 0;

    printf("Enter number : ");
    scanf("%d", &Number);

    print_Factors(Number);

    return 0;
}

/////////////////////////////////////////////////////////////////////

//  Input :      12 
//  Output :     1 2 3 4 6

//  Input :      -12
//  Output :     1 2 3 4 6

//  Input :      13
//  Output :     1

// Time Complexity : O(N/2)

///////////////////////////////////////////////////////////////////