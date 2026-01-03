// Write a program which accept string from user and accept one character.
// Return index of first occurance of that character.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FirstChar
//  Description     :   Used to return index of first occurance
//  Input           :   String
//  Output          :   Integer
//  Author          :   Samarth Sandip Ghule
//  Date            :   30/11/2025
//
////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int idx = 0;

    while(str[idx] != '\0')
    {
        if(str[idx] == ch)
        {
            return idx;
        }
        idx++;
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}
