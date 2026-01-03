// Write a program which accept string from user and accept one character.
// Return index of last occurance of that character.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastChar
//  Description     :   Used to return index of last occurance
//  Input           :   String
//  Output          :   Integer
//  Author          :   Samarth Sandip Ghule
//  Date            :   30/11/2025
//
////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int idx = 0;
    int ipos = -1;

    while(str[idx] != '\0')
    {
        if(str[idx] == ch)
        {
            ipos = idx;
        }
        idx++;
    }
    return ipos;
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

    iRet = LastChar(Arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}
