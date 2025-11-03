
// Write a program to print table of given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : printTable
//  Description :   It prints table of given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int n)
    {
        for(int iCnt=1;iCnt<=10;iCnt++)
        { 
            int iDigit=iCnt*n;
            System.out.println(iDigit);
        }
    }
}
class program17_5
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.printTable(5);

    }
}

///////////////////////////////////////////////////////////////////

// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50

///////////////////////////////////////////////////////////////////