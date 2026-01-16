// Write a generic program to perform division of two numbers.

#include<iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    if(no2 == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return no1 / no2;
}

int main()
{
    int iRet = Div(20, 5);
    printf("%d\n", iRet);

    float fRet = Div(20.0f, 4.0f);
    printf("%f\n", fRet);

    return 0;
}
