// Write a program to check whether the nmber is divisble by 5 and 11 or not.

////////////////////////////////////////////////////////////////////
//
//  Function Name : checkDivisible
//  Description :   It is use to check whether given number is divisible by 5 and 11 or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void checkDivisible(int Number)
    {
        if(Number%5==0 && Number%11==0)
        {
            System.out.println("Number is Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not Divisible by 5 and 11");
        }
    }
}

class program19_3
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.checkDivisible(55);
    }
}

//////////////////////////////////////////////////////////////////////

// Input: 55
// Output: Number is divisble by 5 and 11

//////////////////////////////////////////////////////////////////////