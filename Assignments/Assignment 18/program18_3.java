
// Write a program to print odd numbers from 0 to given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : printOddNumbers
//  Description :   It is use to print odd numbers from 0 to given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void printOddNumbers(int n)
    {
        for(int iCnt=0;iCnt<=n;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.println(iCnt);

            }
        }
    }

}
class program18_3
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.printOddNumbers(20);
    }
}

///////////////////////////////////////////////////////////////////

// Input : 20
// Output : 1 3 5 7 9 11 13 15 17 19

///////////////////////////////////////////////////////////////////