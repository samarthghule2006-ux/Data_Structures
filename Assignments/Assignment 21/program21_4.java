
// Write a program to count total number of factors of a given number

////////////////////////////////////////////////////////////////////
//
//  Function Name : countFactors
//  Description :   It is used to count total number of factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////


class logic
{
    void countFactors(int No)
    {
        int iCount=0;
        
        for(int i=1;i<=No;i++)
        {
            if(No%i==0)
            {
                iCount++;
            }
        }
        System.out.println(iCount);
        
    }

}

class program21_4
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.countFactors(20);
    }
}

////////////////////////////////////////////////////

// Input : 20
// Output: 6

///////////////////////////////////////////////////