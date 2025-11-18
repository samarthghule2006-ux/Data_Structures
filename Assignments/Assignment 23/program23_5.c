// Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int ProductOdd(int Arr[],int iSize)
{
    int iCnt=0,iProduct=1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            iProduct=iProduct*Arr[iCnt];
        }
    }
    return iProduct;
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

    iRet=ProductOdd(Brr,iLength);
    printf("Product is:%d\n",iRet);

}

//////////////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 15 66 3 70 10 88
// Output : 45

// Input : N : 6
// Elements : 44 66 72 70 10 88
// Output : 0

//////////////////////////////////////////////////////////////////////////