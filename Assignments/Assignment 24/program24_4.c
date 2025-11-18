// Accept N numbers from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
       {
            printf("Number is:%d\n",Arr[iCnt]);
       }

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

    Digits(Brr,iLength);

    free(Brr);

    return 0;
}

//////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 8225 665 3 76 953 858
// Output : 665 953 858

//////////////////////////////////////////////////////////////