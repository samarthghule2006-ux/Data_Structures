/*

Write generic program to accept N values and search first occurrence of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to search first occurrence : 40
Output : 6

*/


#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T arr[], int iSize, T iNo)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i + 1;   // position (starts from 1)
        }
    }

    return -1;  // if not found
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr, 9, 40);

    cout << iRet << endl;   // Output: 6

    return 0;
}
