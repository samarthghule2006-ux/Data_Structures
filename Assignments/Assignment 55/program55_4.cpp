// Write a generic program to swap two numbers.

#include<iostream>
using namespace std;

template <class T>
void Swap(T &no1, T &no2)
{
    T temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    Swap(a, b);
    printf("After swap : a = %d, b = %d\n\n", a, b);

    float x = 3.5f, y = 7.8f;
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);
    Swap(x, y);
    printf("After swap : x = %.2f, y = %.2f\n", x, y);

    return 0;
}
