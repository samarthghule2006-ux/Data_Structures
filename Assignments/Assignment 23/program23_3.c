// Accept N numbers from user and accept one another number as NO, return index of last occurence of that NO

#include<stdio.h>
#include<stdlib.h>

int LastOccur(int Arr[],int iSize,int iValue)
{
    int iCnt=0;

    for(iCnt=iSize;iCnt>=0;iCnt--)
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

    iRet=LastOccur(Brr,iLength,iNo);
    if(iRet==-1)
    {
        printf("There is no such file");
    }
    else
    {
        printf("Last occurance of number is:%d",iRet);
    }

}

//////////////////////////////////////////////////////////////////////

// Input : N : 6
//         NO : 66
// Elements : 85 66 3 66 93 88
// Output : 3

// Input : N : 6
//         NO : 93
// Elements : 85 66 3 66 93 88
// Output : 4

//////////////////////////////////////////////////////////////////////
