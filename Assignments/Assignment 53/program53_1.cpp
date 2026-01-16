
// Write generic program to copy one array to another array using function template.


#include<iostream>

using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int brr[5];

    CopyArray(arr, brr, 5);

    printf("Copied array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }

    printf("\n");

    float farr[] = {1.1f, 2.2f, 3.3f};
    float fbrr[3];

    CopyArray(farr, fbrr, 3);

    printf("Copied float array:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%f ", fbrr[i]);
    }

    return 0;
}
