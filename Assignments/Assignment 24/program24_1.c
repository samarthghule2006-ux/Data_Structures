// Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximun(int Arr[],int iSize)
{
    int iCnt=0,iMax=Arr[0];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
    
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

    iRet=Maximun(Brr,iLength);
    printf("Greater Number is:%d\n",iRet);

}

////////////////////////////////////////////////////////////////////////////

// Input : N :  
// Elements : 85 66 3 66 93 88
// Output : 93

////////////////////////////////////////////////////////////////////////////