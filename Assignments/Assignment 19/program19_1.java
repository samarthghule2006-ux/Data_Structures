
// Write a program to check whether a given year is leap year or not

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   It is used to check whether a number is leap year or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckLeapyear(int Year)
    {
        if(Year%4==0 && Year%100!=0 || Year%400==0)
        {
            System.out.println("Year Is Leap Year");
        }
        else
        {
            System.out.println("Year Is Not Leap Year");

        }
    }


}
class program19_1
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.CheckLeapyear(2024);
    }
}

//////////////////////////////////////////////////////////////////////

// Input : 2024
// Output: year is leap year

//////////////////////////////////////////////////////////////////////