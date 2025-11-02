//Accept one number from user and display its factors
//Count total no of factors it have  

#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt=0, iFrequency=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors are :%d\n",iRet);

    return 0;
}