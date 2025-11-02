#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return((iNo%2)==0); 
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is an Even Number\n",iValue);
    }
    else
    {
        printf("%d is a Odd Number\n",iValue);
    }

    return 0;
}