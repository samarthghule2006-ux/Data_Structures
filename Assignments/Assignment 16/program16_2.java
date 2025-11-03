
// Write a program which checks whether number is even or odd.

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Check whether the number is even or odd
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class EvenOddNumber
{
    void CheckEvenOdd(int n)
    {
        if(n%2==0)
        {
            System.out.println("Number is Even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }

}

class program16_2
{
    public static void main(String a[])
    {
        EvenOddNumber nobj=new EvenOddNumber();
        nobj.CheckEvenOdd(7);

    }
}

//////////////////////////////////////////////////////////////////

// Input : 7
// Output : Number is Odd

//////////////////////////////////////////////////////////////////