// Accept number from user and display below pattern

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0,iCount=1;

        for(iCnt=1;iCnt<=(iNo*2);iCnt++)
        {
            if((iCnt%2)==0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }

    }
}
class program26_3
{
    public static void main(String A[])
    {
        int iValue=0;

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number:");

        iValue=sobj.nextInt();

        Pattern pobj=new Pattern();
        pobj.Display(iValue);
    }
}

////////////////////////////////////////////////////////////////////////

// Input : 5
// Output : 1   *   2   *   3   *   4   *   5   *

////////////////////////////////////////////////////////////////////////