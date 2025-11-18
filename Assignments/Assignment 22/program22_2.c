// Accept N numbers from user and return difference between frequency of even and odd number

#include<stdio.h>
#include<stdlib.h>

int DiffEvenOdd(int Arr[],int iSize)
{
    int iCnt=0,iEven=0,iOdd=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
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

    iRet=DiffEvenOdd(Brr,iLength);
    printf("Difference between Even and odd is:%d\n",iRet);

}

///////////////////////////////////////////////////////////////

// Input : 7
// ELements : 85 66 3 80 93 88 90

// Output : 1(4 -3)

//////////////////////////////////////////////////////////////// 