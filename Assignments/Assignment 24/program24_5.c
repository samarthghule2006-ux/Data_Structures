// Accept N numbers from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void SumDigit(int Arr[],int iSize)
{
    int iCnt=0,inum=0,iDigit=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       inum=Arr[iCnt];
       iSum=0;

       while(inum>0)
       {
            iDigit=inum%10;
            iSum=iSum+iDigit;
            inum=inum/10;
       }
       printf("%d\n",iSum);

    }
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;

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

    SumDigit(Brr,iLength);

}

//////////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 8225 665 3 76 953 858
// Output : 17 17 3 13 17 21

//////////////////////////////////////////////////////////////////////