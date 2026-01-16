/*

Write generic program to accept N values from user and return the maximum number.

Input : 10 20 30 40 50
Output : 50

Input : 10.0 3.7 9.8 8.7
Output : 10.0

*/

#include<iostream>

using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T iMax = arr[0];
    int i = 0;

    for(i = 1; i < iSize; i++)
    {
        if(arr[i] > iMax)
        {
            iMax = arr[i];
        }
    }

    return iMax;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Max(arr, 5);
    printf("%d\n", iRet);   // 50

    float fRet = Max(brr, 4);
    printf("%f\n", fRet);   // 9.8

    return 0;
}
