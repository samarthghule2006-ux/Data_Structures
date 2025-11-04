
// Write a program to count how many even and odd numbers are present between 1 and N

////////////////////////////////////////////////////////////////////
//
//  Function Name : countEvenOddRange
//  Description :   It is used to count how many even and odd numbers are present in 1 and N
//  Input :         Integer
//  Output :        Integer Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////


class logic
{
    void countEvenOddRange(int No)
    {
        int iEven=0;
        int iOdd=0;
        for(int i=1;i<=No;i++)
        {
            if(i%2==0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }
        System.out.println(iEven);
        System.out.println(iOdd);
    }

}

class program21_2
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.countEvenOddRange(50);
    }
}

////////////////////////////////////////////////////////////////////

// Input : 50
// Output: 25 25

////////////////////////////////////////////////////////////////////