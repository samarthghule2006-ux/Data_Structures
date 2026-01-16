// Write generic program to check whether the array is palindrome or not using function template.

#include <stdio.h>
#include <stdbool.h>

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int i = 0; i < iSize - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;   // Not sorted
        }
    }
    return true;  // Sorted
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {10, 30, 20, 40, 50};

    bool bRet1 = CheckSorted(arr1, 5);
    bool bRet2 = CheckSorted(arr2, 5);

    printf("arr1 sorted: %s\n", bRet1 ? "true" : "false");
    printf("arr2 sorted: %s\n", bRet2 ? "true" : "false");

    return 0;
}
