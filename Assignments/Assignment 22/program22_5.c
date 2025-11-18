// Accept N numbers from user and accept one another number as no and return frequency of that number in it

#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iSize,int iValue)
{
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            iCount++;
        }
        
    }
    return iCount;
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;
    int iNo=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

    printf("Enter the No:");
    scanf("%d",&iNo);

    Brr=(int*) malloc(iLength * sizeof(int));

    if(NULL == Brr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the Element:");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=Count(Brr,iLength,iNo);
    printf("Count of 11 is:%d\n",iRet);

}

//////////////////////////////////////////////////////////

// Input : N : 6
// NO : 66
// Elements : 85 66 3 66 93 88
// Output : 2

// Input : N : 6
// NO : 12
// Elements : 85 11 3 15 11 111
// Output : 0

///////////////////////////////////////////////////////////