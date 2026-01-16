/*

Write a generic program which accept one value and one number from user.
Print that value on screen that number of times.

Input : M 7
Output : M M M M M M M

Input : 11 3
Output : 11 11 11

Input : 3.7 6
Output : 3.7 3.7 3.7 3.7 3.7 3.7

*/

#include<iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
    for(int i = 1; i <= iSize; i++)
    {
        cout << value << " ";
    }
    cout<<"\n";
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7f, 6);
    return 0;
}
