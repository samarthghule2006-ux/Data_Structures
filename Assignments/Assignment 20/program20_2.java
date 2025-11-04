
// Write a program to print number from N down to 1 in reverse order

////////////////////////////////////////////////////////////////////
//
//  Function Name : printReverse
//  Description :   It is used to display number from N to reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class logic
{
    void printReverse(int No)
    {
        
        for(int i=No;i>=1;i--)
        {
           System.out.println(i);
        }
    }

}

class program20_2
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.printReverse(10);
    }
}

////////////////////////////////////////////////////////////

// Input: 10
//Output: 10 9 8 7 6 5 4 3 2 1

////////////////////////////////////////////////////////////