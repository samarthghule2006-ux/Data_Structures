// Write generic program to search a value in an array.

#include<iostream>

using namespace std;

template <class T>
bool Search(T *arr, int iSize, T value)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {1.1f, 2.2f, 3.3f, 4.4f};

    bool bRet1 = Search(arr, 5, 30);
    if(bRet1 == true)
        printf("30 is found\n");
    else
        printf("30 is not found\n");

    bool bRet2 = Search(brr, 4, 5.5f);
    if(bRet2 == true)
        printf("5.5 is found\n");
    else
        printf("5.5 is not found\n");

    return 0;
}
