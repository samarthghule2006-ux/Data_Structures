
//  Write a program to calculate the power of a number using loop

////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculatePower
//  Description :   It is used to calculate the power of a number
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class logic
{
    void CalculatePower(int base,int exp)
    {
        int result=1;
        for(int i=1;i<=exp;i++)
        {
            result=result*base;
        }
        System.out.println("Power is:"+result);
    }
}
class program19_5
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.CalculatePower(2,5);
    }
}

/////////////////////////////////////////////////////////////////

// Input: 2,5
// Output: 32

//////////////////////////////////////////////////////////////////