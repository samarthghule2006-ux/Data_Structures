/*

Write generic program to accept N numbers from user and return their addition.

Input : 10 20 30 40 50
Output : 150

Input : 10.0 3.7 9.8 8.8
Output : 32.3

*/

#include<iostream>

using namespace std;    

template <class T>
T AddN(T *arr, int iSize)
{
    T iSum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + arr[i];
    }

    return iSum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.8f};

    int iSum = AddN(arr, 5);
    printf("%d\n", iSum);

    float fSum = AddN(brr, 4);
    printf("%f\n", fSum);

    return 0;
}
