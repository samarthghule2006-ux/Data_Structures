
// Write a program to check whether given number is positive or negative or zero.

////////////////////////////////////////////////////////////////////
//
//  Function Name : checkSign
//  Description :   It is use to check whether given number is positive or negative or zero
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void checkSign(int n)
    {
        if(n==0)
       {
            System.out.println("Number is Zero");
       }
       if(n>0)
       {
            System.out.println("Number is Positive");
       }
       if(n<0)
       {
            System.out.println("Number is Negative");
       }
    }

}
class program18_5
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.checkSign(-8);
    }
}

///////////////////////////////////////////////////////////////////

// Input : -8
// Output : Number is Negative  

///////////////////////////////////////////////////////////////////