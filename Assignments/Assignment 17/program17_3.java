
// Write a program to find maximum between two numbers.

////////////////////////////////////////////////////////////////////
//
//  Function Name : findMax
//  Description :   It finds maximum between two numbers
//  Input :         Integer,Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void findMax(int a,int b)
    {
        if(a>b)
        {
            System.out.println(a);
        }
        else
        {
            System.out.println(b);
        }
    }
}
class program17_3
{
    public static void main(String a[])
    {
        Logic lobj=new Logic();
        lobj.findMax(20,15);

    }
}

///////////////////////////////////////////////////////////////////

// Input : 20 15
// Output : 20

///////////////////////////////////////////////////////////////////
