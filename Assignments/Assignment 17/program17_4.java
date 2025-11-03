
// Write a program to find minimum between three numbers.

////////////////////////////////////////////////////////////////////
//
//  Function Name : findMin
//  Description :   It finds minimum between three numbers
//  Input :         Integer,Integer,Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void findMin(int a,int b,int c)
    {
        if(a<b && a<c)
        {
            System.out.println(a);
        }
        if(b<c && b<a)
        {
            System.out.println(b);
        }
        else
        {
            System.out.println(c);
        }
    }
}
class program17_4
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.findMin(3,7,2);

    }
}

////////////////////////////////////////////////////////////////////

// Input: 3 7 2
// Output: 2

////////////////////////////////////////////////////////////////////