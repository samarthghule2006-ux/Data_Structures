
// Write a program to find sum of digits in given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : SumOfDigit
//  Description :   It is use to find sum of digits in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void SumOfDigit(int n)
    {

        int iDigit=0;
        int iSum=0;
        while(n>0)
        {
            iDigit=n%10;
            iSum=iSum+iDigit;
            n=n/10;
        }
        System.out.println(iSum);
    }
}
class program17_1
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.SumOfDigit(1234);

    }
}

///////////////////////////////////////////////////////////////////

// Input : 1234
// Output : 10

///////////////////////////////////////////////////////////////////