// Accept N numbers from user and display all such elements which are multiples of 11


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]%11==0)
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

    Display(Brr,iLength);

}

////////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 55 93 88
// Output : 66 55 88 

/////////////////////////////////////////////////////////////////////