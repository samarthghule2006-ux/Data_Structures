
// Write a program to display the grade of a student based on marks

////////////////////////////////////////////////////////////////////
//
//  Function Name : displayGrade
//  Description :   It is use to display grade on based of marks
//  Input :         Integer
//  Output :        Integer
//  Author :        Samarth Sandip Ghule
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void displayGrade(int Marks)
    {
        if(Marks<50)
        {
            System.out.println("C Grade");
        }
        if(Marks>50 && Marks<80)
        {
            System.out.println("B Grade");

        }
        if(Marks>80 && Marks<100)
        {
            System.out.println("A Grade");

        }
    }


}
class program19_2
{
    public static void main(String a[])
    {
        Logic obj=new Logic();
        obj.displayGrade(82);
    }
}


///////////////////////////////////////////////////////////////////////////

// Input : 82
// Output : A Grade

///////////////////////////////////////////////////////////////////////////