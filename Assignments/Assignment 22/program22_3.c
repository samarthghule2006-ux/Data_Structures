// Accept N numbers from user and check whether that number contains 11 in it or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return true;
        }
        
    }
    return false;
    
}
int main()
{
    int iLength=0;
    int *Brr=NULL;
    int iCnt=0;
    bool bRet=false;

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

    bRet=Check(Brr,iLength);
    if(bRet==true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is Absent");
    }

}

//////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 11 80 93 88
// Output : 11 is present

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 11 is absent

/////////////////////////////////////////////////////////

