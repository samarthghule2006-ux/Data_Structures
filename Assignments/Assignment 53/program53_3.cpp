// Write a generic program to find second largest element in an array using function template.

#include<iostream>

using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return arr[0];   // not enough elements
    }

    T max1, max2;

    if(arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    return max2;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {1.1f, 3.3f, 2.2f, 5.5f};

    int iRet = SecondMax(arr, 5);
    printf("%d\n", iRet);   // 40

    float fRet = SecondMax(brr, 4);
    printf("%f\n", fRet);   // 3.3

    return 0;
}
