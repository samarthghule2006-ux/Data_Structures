
// Write a program to print all numbers from 1 to N that are divisible by both 2 and 3

////////////////////////////////////////////////////////////////////
//
//  Function Name : printDivisibilityby2and3
//  Description :   It is used to print numbers that are divisible by both 2 and 3
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////


class logic
{
    void printDivisibilityby2and3(int No)
    {
        
       
        if(No%2==0 && No%3==0)
        {
            System.out.println("It is Divisible");
        }
        else
        {
            System.out.println("It is Not Divisible");
        }
       
        
    }

}

class program21_5
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.printDivisibilityby2and3(30);
    }
}

////////////////////////////////////////////////////////////

// Input : 30
// Output: It is Divisible

////////////////////////////////////////////////////////////