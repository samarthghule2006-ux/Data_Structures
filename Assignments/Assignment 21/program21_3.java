
// Write a program to display all factors of a given number

////////////////////////////////////////////////////////////////////
//
//  Function Name : displayFactors
//  Description :   It is used to find the smallest digit in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////


class logic
{
    void displayFactor(int No)
    {
        
        for(int i=1;i<No;i++)
        {
            if(No%i==0)
            {
                System.out.println(i);
            }
        }
        
    }

}

class program21_3
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.displayFactor(12);
    }
}

/////////////////////////////////////////////////////////////

// Input : 12
// Output: 1 2 3 4 6

/////////////////////////////////////////////////////////////