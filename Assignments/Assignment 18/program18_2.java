
// Write a program to print even numbers from 0 to given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : printEvenNumbers
//  Description :   It is use to print even numbers from 0 to given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void printEvenNumbers(int n)
    {
        for(int iCnt=0;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.println(iCnt);

            }
        }
    }

}
class program18_2
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.printEvenNumbers(20);
    }
}

///////////////////////////////////////////////////////////////////

// Input : 20
// Output : 0 2 4 6 8 10 12 14 16 18 20

///////////////////////////////////////////////////////////////////