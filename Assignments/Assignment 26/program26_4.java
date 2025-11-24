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
                System.out.print(iCount+"\t"+"*"+"\t");
                iCount++;
            }
            else
            {
                System.out.print("#\t");
                
            }
        }

    }
}
class program26_4
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

//////////////////////////////////////////////////////////////////

// Input : 4
// Output : #   1   *   #   2   *   #   3   *   #   4   *

//////////////////////////////////////////////////////////////////