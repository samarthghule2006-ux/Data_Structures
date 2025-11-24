// Accept number from user and display below pattern

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0,iCount=iNo;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {            
            System.out.print((iCnt*2)+"\t");
        }

    }
}
class program26_5
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

////////////////////////////////////////////////////////////////

// Input : 8
// Output : 2   4   6   8   10  12  14  16

////////////////////////////////////////////////////////////////