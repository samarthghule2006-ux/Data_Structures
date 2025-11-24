// Accept number from user and display below pattern

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        char ch='A';

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            System.out.print(ch+"\t");
            ch++;
            if(ch>'Z')
            {
                ch='A';
            }
        }

    }
}
class program26_1
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

////////////////////////////////////////////////////////////

// Input : 5
// Output : A   B   C   D   E

////////////////////////////////////////////////////////////