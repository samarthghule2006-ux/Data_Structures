// Accept N numbers from user and return the difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt=0,iMax=Arr[0],iMin=Arr[0];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        else if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return (iMax-iMin);
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

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

    iRet=Difference(Brr,iLength);
    printf("Difference is:%d\n",iRet);

}

///////////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 90 (93-3)

///////////////////////////////////////////////////////////////////////