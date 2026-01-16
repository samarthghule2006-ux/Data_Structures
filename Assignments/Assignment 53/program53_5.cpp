// Write generic program replace all occurrences of a value

#include <stdio.h>

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 10, 30, 10};
    float brr[] = {1.1f, 2.2f, 1.1f, 3.3f};

    Replace(arr, 5, 10, 99);
    Replace(brr, 4, 1.1f, 9.9f);

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    for(int i = 0; i < 4; i++)
        printf("%f ", brr[i]);

    return 0;
}
