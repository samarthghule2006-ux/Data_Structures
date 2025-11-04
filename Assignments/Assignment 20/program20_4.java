
// Write a program to find the largest digit in a given number

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargestDigit
//  Description :   It is used to find the largest digit in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class logic
{
    void FindLargestDigit(int No)
    {
        int max=0,digit;
        while(No>0)
        {
            digit=No%10;
            if(digit>max)
            {
                max=digit;
            }
            No=No/10;
        }
        System.out.println(max);
    }

}

class program20_4
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.FindLargestDigit(83457);
    }
}

/////////////////////////////////////////////////////////////////////////

// Input : 83457
// Output:   8

//////////////////////////////////////////////////////////////////////////