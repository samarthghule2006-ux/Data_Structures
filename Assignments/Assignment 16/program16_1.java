
// Write a program to calculate sum of first N natural numbers.

////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateSum
//  Description :   Calculate sum of first N natural numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CalculateSum(int n)
    {
        int isum=0;
        for(int i=1;i<=n;i++)
        {
            isum=isum+i;
        }
        System.out.println("sum of First.."+n+"..Natural Number is:"+isum);
    }

}

class program16_1
{
    public static void main(String a[])
    {
        Logic Lobj=new Logic();
        Lobj.CalculateSum(10);

    }
}

////////////////////////////////////////////////////////////////////

// Input : 10
// Output : sum of First..10..Natural Number is:55

////////////////////////////////////////////////////////////////////
