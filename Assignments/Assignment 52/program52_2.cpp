/*

Write generic program to find maximum of three numbers.

Input : 10 20 15
Output : 20

Input : 10.5 20.2 15.8
Output : 20.2

*/

#include<iostream>

using namespace std;    

template <class T>
T Max(T no1, T no2, T no3)
{
    T max;

    if(no1 >= no2 && no1 >= no3)
        max = no1;
    else if(no2 >= no1 && no2 >= no3)
        max = no2;
    else
        max = no3;

    return max;
}

int main()
{
    int iRet = Max(10, 20, 15);
    printf("%d\n", iRet);

    float fRet = Max(10.5f, 20.2f, 15.8f);
    printf("%f\n", fRet);

    return 0;
}
