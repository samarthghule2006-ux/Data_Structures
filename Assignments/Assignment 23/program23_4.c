// Accept N numbers from user and accept Range, Display all the elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int Start,int End)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>Start && Arr[iCnt]<End)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    int iRet=0;
    int iStart=0,iEnd=0;

    printf("Enter the Number of Array:");
    scanf("%d",&iLength);

    printf("Enter the Start:");
    scanf("%d",&iStart);

    printf("Enter the End:");
    scanf("%d",&iEnd);

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

    Range(Brr,iLength,iStart,iEnd);
}

////////////////////////////////////////////////////////////////////////

// Input : N : 6
// Start : 60
// End : 90
// Elements : 85 66 3 76 93 88
// Output : 66 76 88

// Input : N : 6
// Start : 30
// End : 50
// Elements : 85 66 3 76 93 88
// Output : 

////////////////////////////////////////////////////////////////////////