// Write a generic program to find maximum among four numbers.

#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return max;
}

int main()
{
    int iRet = Max(10, 20, 5, 15);
    printf("Max (int)   = %d\n", iRet);

    float fRet = Max(10.5f, 20.2f, 5.1f, 15.9f);
    printf("Max (float) = %.2f\n", fRet);

    char cRet = Max('A', 'Z', 'M', 'B');
    printf("Max (char)  = %c\n", cRet);

    return 0;
}
