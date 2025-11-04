
// Write a program to calculate the product of digits of a number

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindSmallestDigit
//  Description :   It is used to calculate the product of digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////


class logic
{
    void productOfDigits(int No)
    {
        int mul=1,digit;
        while(No>0)
        {
            digit=No%10;
            mul=mul*digit;
            No=No/10;
        }
        System.out.println(mul);
    }

}

class program21_1
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.productOfDigits(234);
    }
}

//////////////////////////////////////////////////////////////////////

// Input : 234
// Output : 24

//////////////////////////////////////////////////////////////////////