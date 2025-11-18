// Accept N numbers from user and accept one another number as NO, return index of first occurence of that NO

#include<stdio.h>
#include<stdlib.h>

int FirstOccur(int Arr[],int iSize,int iValue)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            return iCnt;
        }
        
    }
    return -1;
    
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

    iRet=FirstOccur(Brr,iLength,iNo);
    if(iRet==-1)
    {
        printf("There is no such file");
    }
    else
    {
        printf("First occurance of number is:%d",iRet);
    }

}

///////////////////////////////////////////////////////////////////

// Input : N : 6
//         NO : 66
// ELements : 85 66 3 66 93 88
// Output : 1

// Input : N : 6
//         NO : 12
// ELements : 85 11 3 15 11 111
// Output : -1

////////////////////////////////////////////////////////////////////