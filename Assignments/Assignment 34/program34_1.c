// Write a program which display ASCII table. Table contains symbol,decimal,Hexadecimal and octal representation of every member from 0 to 225.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayASCII
//  Description     : Displays ASCII table from 0 to 225
//  Input           : None
//  Output          : ASCII Table
//  Author          : Samarth Sandip Ghule
//  Date            : 28/11/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCount = 0;

    printf("Sym\tDec\tHex\tOct\n");
    printf("--------------------------------\n");

    for(iCount = 0; iCount <= 225; iCount++)
    {
        if((iCount >= 32) && (iCount <= 126))
        {
            printf("%c\t%d\t%X\t%o\n", iCount, iCount, iCount, iCount);
        }
        else
        {
            printf(".\t%d\t%X\t%o\n", iCount, iCount, iCount, iCount);
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();
    return 0;
}
