// Write a program to count number of digits in given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDigits
//  Description :   It counts number of digits in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CountDigits(int n)
    {

        int iDigit=0;
        int iCount=0;
        while(n>0)
        {
            iDigit=n%10;
            iCount++;
            n=n/10;
            
        }
        System.out.println(iCount);
    }
}
class program16_5
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.CountDigits(7865);

    }
}

///////////////////////////////////////////////////////////////////

// Input : 7865
// Output : 4

///////////////////////////////////////////////////////////////////