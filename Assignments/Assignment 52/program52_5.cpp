/*

Write generic program to accept N values from user and return the minimum number.

Input : 10 20 30 40 50
Output : 10 

Input : 10.0 3.7 9.8 8.7
Output : 3.7

*/

#include<iostream>

using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T iMin = arr[0];
    int i = 0;

    for(i = 1; i < iSize; i++)
    {
        if(arr[i] < iMin)
        {
            iMin = arr[i];
        }
    }

    return iMin;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Min(arr, 5);
    printf("%d\n", iRet);   // 10

    float fRet = Min(brr, 4);
    printf("%f\n", fRet);   // 3.7

    return 0;
}
