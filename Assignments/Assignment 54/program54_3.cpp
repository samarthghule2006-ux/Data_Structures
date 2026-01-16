// Write generic program to find sum of odd elements in an array.

#include <iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int iSize)
{
    T sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
        }
    }

    return sum;
}

int main()
{
    int arr[] = {10, 21, 30, 41, 50};

    int result = SumOdd(arr, 5);

    cout << "Sum of odd elements: " << result << endl;

    return 0;
}
