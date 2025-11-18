// Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];
        }
    }
    return (iEven-iOdd);
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
    printf("Count of Even is:%d\n",iRet);

}

//////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181)

///////////////////////////////////////////////////////////////////