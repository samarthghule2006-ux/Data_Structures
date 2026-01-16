/*
Write generic program to accept N values and search last occurrence of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to search last occurrence : 40
Output : 8

*/

#include <iostream>
using namespace std;

template <class T>
int SearchLast(T arr[], int iSize, T iNo)
{
    for(int i = iSize - 1; i >= 0; i--)
    {
        if(arr[i] == iNo)
        {
            return i + 1;   // position (1-based)
        }
    }

    return -1;   // if not found
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 40);

    cout << iRet << endl;   // Output: 8

    return 0;
}
