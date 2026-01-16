// Write generic program to find smallest element from array.

#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10, 20, 5, 40, 50};
    float brr[] = {10.5, 3.2, 9.8, 7.1};

    cout << "Smallest int: " << Min(arr, 5) << endl;
    cout << "Smallest float: " << Min(brr, 4) << endl;

    return 0;
}
