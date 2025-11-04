
// Write a program to print each digit of a nummber separately

////////////////////////////////////////////////////////////////////
//
//  Function Name : printDigits
//  Description :   It is use print each digit separately from a number
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void printDigits(int Number)
    {
        int iDigit=0;
        while(Number>0)
        {
            iDigit=Number%10;
                      
            Number=Number/10;
        }
    }
}

class program19_4
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.printDigits(9876);
    }
}
