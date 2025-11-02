//  Accept number from user and return the summation of all digits.

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iDigit % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }    

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);

    printf("Sum of Digits is : %d\n",iRet);
    
    return 0;
}