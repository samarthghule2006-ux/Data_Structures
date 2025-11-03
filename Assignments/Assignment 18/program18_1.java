
// Write a program to check whether given number is prime or not.

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description :   It is use to check whether given number is prime or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckPrime(int n)
    {
        for(int iCnt=2;iCnt<n;iCnt++)
        {
            if(n%iCnt!=0)
            {
                
            }
        }
        System.out.println("Number is Prime");
    }

}
class program18_1  
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.CheckPrime(11);


    }
}

///////////////////////////////////////////////////////////////////

// Input : 11
// Output : Number is Prime

///////////////////////////////////////////////////////////////////