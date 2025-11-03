
// Write a program to find factorial of given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindFactorial
//  Description :   Find factorial of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Factorial
{
    void FindFactorial(int n)
    {
        int iFactorial=1;
        for(int iCnt=1;iCnt<=n;iCnt++)
        {
            iFactorial=iFactorial*iCnt;
        }
        System.out.println("Factorial is:" +iFactorial);
    }
}
class program16_3
{
    public static void main(String a[])
    {
        Factorial fobj=new Factorial();
        fobj.FindFactorial(5);
    }
}

////////////////////////////////////////////////////////////////////

// Input : 5
// Output : Factorial is: 120

////////////////////////////////////////////////////////////////////