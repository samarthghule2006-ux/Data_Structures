
// Write a program to check whether given number is palindrome or not.

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPalindrome
//  Description :   It checks whether given number is palindrome or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckPalindrome(int n)
    {
        int iNumber=n;
        int iRev=0;
        int iDigit=0;
        while(n>0)
        {
            iDigit=n%10;
            iRev=iRev*10+iDigit;
            n=n/10;
        }

        if(iNumber==iRev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is not Palindrome");

        }
    }

}
class program17_2
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.CheckPalindrome(121);


    }
}

///////////////////////////////////////////////////////////////////

// Input : 121
// Output : Number is Palindrome

///////////////////////////////////////////////////////////////////