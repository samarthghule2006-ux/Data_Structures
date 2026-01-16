// Write a generic program to find second smallest element in an array using function template.

#include<iostream>

using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    if(iSize < 2)
    {
        return arr[0];   // not enough elements
    }

    T min1, min2;

    if(arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }

    return min2;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {1.1f, 3.3f, 2.2f, 5.5f};

    int iRet = SecondMin(arr, 5);
    printf("%d\n", iRet);   // 20

    float fRet = SecondMin(brr, 4);
    printf("%f\n", fRet);   // 2.2

    return 0;
}
